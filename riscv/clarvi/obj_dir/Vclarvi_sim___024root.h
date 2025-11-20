// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclarvi_sim.h for the primary calling header

#ifndef VERILATED_VCLARVI_SIM___024ROOT_H_
#define VERILATED_VCLARVI_SIM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vclarvi_sim___024unit;


class Vclarvi_sim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclarvi_sim___024root final : public VerilatedModule {
  public:
    // CELLS
    Vclarvi_sim___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ clarvi_sim__DOT__clock;
        CData/*3:0*/ clarvi_sim__DOT__main_byteenable;
        CData/*0:0*/ clarvi_sim__DOT__main_read;
        CData/*0:0*/ clarvi_sim__DOT__main_write;
        CData/*0:0*/ clarvi_sim__DOT__external_access;
        IData/*31:0*/ clarvi_sim__DOT____Vcellout__mem__avs_b_readdata;
        CData/*0:0*/ clarvi_sim__DOT____Vcellinp__mem__avs_a_write;
        IData/*31:0*/ clarvi_sim__DOT____Vcellout__mem__avs_a_readdata;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__interrupt;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_exception;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_exception;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address_error;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_invalid;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_invalid;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_invalid;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_invalid;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_wait;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_pending;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_if;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_de;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_ex;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_stall_on_prev;
        CData/*1:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset;
        CData/*1:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_word_offset;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_taken;
        CData/*0:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_taken;
        CData/*4:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__Vfuncout;
        CData/*2:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct3;
        CData/*4:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__rs1;
        CData/*0:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__legal_csr_op;
        CData/*0:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__Vfuncout;
        CData/*0:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__write;
        CData/*4:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__shift_amount;
        CData/*3:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__compute_byte_enable__9__Vfuncout;
        CData/*0:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout;
        CData/*4:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation;
        CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__width;
        CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__word_offset;
        CData/*0:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__Vfuncout;
        CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__word_offset;
        CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__14__width;
        CData/*0:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__Vfuncout;
        CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__word_offset;
        CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__15__width;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clarvi_sim__DOT__clock__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_opcode__1__funct12;
        SData/*11:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__validate_csr_op__2__csr;
        SData/*11:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_12;
        SData/*11:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__csr_addr;
        SData/*11:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__csr_addr;
        IData/*28:0*/ clarvi_sim__DOT__main_address;
        IData/*31:0*/ clarvi_sim__DOT__main_writedata;
        IData/*31:0*/ clarvi_sim__DOT__external_readdata;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus;
    };
    struct {
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_pc;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_pc;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_instr;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instr_read_data_buffer;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs1_forward;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs2_forward;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs1_value;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs2_value;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_result;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_result;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_target;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_next_pc;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_result;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_value;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__trap_pc;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__potential_mepc;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs1_value;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_mem_address;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target;
        IData/*31:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT____Vlvbound_h97a065f5__0;
        IData/*19:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__sign_ext_20;
        IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__Vfuncout;
        IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute__6__rs2_value_or_imm;
        IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__7__Vfuncout;
        IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__read_csr__8__Vfuncout;
        IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value;
        IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value;
        IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout;
        IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__Vfuncout;
        IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_shift_mask_extend__12__masked_value;
        IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__Vfuncout;
        IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__load_mask__13__value;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret;
        QData/*63:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles;
        VlWide<4>/*104:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr;
        VlWide<4>/*104:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr;
        VlWide<4>/*104:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr;
        VlWide<4>/*104:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr;
        QData/*63:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp;
        QData/*63:0*/ clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__bubble_counter;
        VlWide<4>/*104:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_instr__0__Vfuncout;
        QData/*32:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__decode_immediate__3__Vfuncout;
        VlUnpacked<IData/*31:0*/, 16384> clarvi_sim__DOT__mem__DOT__memory;
        VlUnpacked<IData/*31:0*/, 31> clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vclarvi_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclarvi_sim___024root(Vclarvi_sim__Syms* symsp, const char* v__name);
    ~Vclarvi_sim___024root();
    VL_UNCOPYABLE(Vclarvi_sim___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
