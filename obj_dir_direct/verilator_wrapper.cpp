
#include "Vminesweeper_core.h"
#include "verilated.h"
#include <cstdint>

// Required by Verilator - simulation time tracking
double sc_time_stamp() {
    return 0;  // Not using SystemC timing
}

// Global simulation object
static Vminesweeper_core* top = nullptr;
static VerilatedContext* contextp = nullptr;

extern "C" {

// Initialize simulation
void sim_init() {
    contextp = new VerilatedContext;
    top = new Vminesweeper_core(contextp);
}

// Cleanup simulation
void sim_cleanup() {
    if (top) delete top;
    if (contextp) delete contextp;
    top = nullptr;
    contextp = nullptr;
}

// Evaluate (propagate signals)
void sim_eval() {
    if (top) top->eval();
}

// Input setters
void sim_set_clk(uint8_t val) { if (top) top->clk = val; }
void sim_set_reset(uint8_t val) { if (top) top->reset = val; }
void sim_set_cmd_valid(uint8_t val) { if (top) top->cmd_valid = val; }
void sim_set_cmd(uint8_t val) { if (top) top->cmd = val; }
void sim_set_x(uint8_t val) { if (top) top->x = val; }
void sim_set_y(uint8_t val) { if (top) top->y = val; }

// Output getters
uint64_t sim_get_revealed() { return top ? top->revealed : 0; }
uint64_t sim_get_flagged() { return top ? top->flagged : 0; }
uint64_t sim_get_mines() { return top ? top->mines : 0; }
uint8_t sim_get_game_over() { return top ? top->game_over : 0; }
uint8_t sim_get_win() { return top ? top->win : 0; }

}
