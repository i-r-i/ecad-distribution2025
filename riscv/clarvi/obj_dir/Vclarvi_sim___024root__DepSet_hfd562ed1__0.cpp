// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclarvi_sim.h for the primary calling header

#include "Vclarvi_sim__pch.h"
#include "Vclarvi_sim__Syms.h"
#include "Vclarvi_sim___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclarvi_sim___024root___dump_triggers__act(Vclarvi_sim___024root* vlSelf);
#endif  // VL_DEBUG

void Vclarvi_sim___024root___eval_triggers__act(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits__1)) 
                                     | ((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset__1))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clarvi_sim__DOT__clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clock__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits__1 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits;
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset__1 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset;
    vlSelf->__Vtrigprevexpr___TOP__clarvi_sim__DOT__clock__0 
        = vlSelf->clarvi_sim__DOT__clock;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vclarvi_sim___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vclarvi_sim___024root___nba_sequent__TOP__0(Vclarvi_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclarvi_sim___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*104:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr;
    VL_ZERO_W(105, __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr);
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__rs1_value;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__rs1_value = 0;
    IData/*31:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__Vfuncout;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__word_offset;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__word_offset = 0;
    CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__width;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__width = 0;
    CData/*0:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__Vfuncout;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__word_offset;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__word_offset = 0;
    CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__width;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__width = 0;
    CData/*0:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__Vfuncout;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__word_offset;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__word_offset = 0;
    CData/*1:0*/ __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__width;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__width = 0;
    VlWide<4>/*104:0*/ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr;
    VL_ZERO_W(105, __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr);
    IData/*31:0*/ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__rs1_value;
    __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__rs1_value = 0;
    IData/*31:0*/ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value;
    __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value = 0;
    SData/*11:0*/ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr;
    __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr = 0;
    std::string __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result;
    std::string __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values;
    SData/*11:0*/ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__csr;
    __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__csr = 0;
    SData/*13:0*/ __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v0;
    __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v0;
    __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v0;
    __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v0;
    __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v1;
    __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v1;
    __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v1;
    __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v1;
    __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v1 = 0;
    SData/*13:0*/ __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v2;
    __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v2;
    __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v2;
    __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v2;
    __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v2 = 0;
    SData/*13:0*/ __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v3;
    __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v3;
    __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v3;
    __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v3;
    __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvdim0__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0;
    __Vdlyvdim0__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0;
    __Vdlyvval__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0;
    __Vdlyvset__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch = 0;
    QData/*63:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs1_value;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs1_value = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_mem_address;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_mem_address = 0;
    IData/*31:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target = 0;
    CData/*0:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_taken;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_taken = 0;
    QData/*63:0*/ __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__bubble_counter;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__bubble_counter = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    std::string __Vtemp_13;
    std::string __Vtemp_14;
    std::string __Vtemp_15;
    std::string __Vtemp_16;
    std::string __Vtemp_17;
    std::string __Vtemp_18;
    std::string __Vtemp_19;
    std::string __Vtemp_20;
    std::string __Vtemp_21;
    std::string __Vtemp_22;
    std::string __Vtemp_23;
    std::string __Vtemp_24;
    std::string __Vtemp_25;
    std::string __Vtemp_26;
    std::string __Vtemp_27;
    std::string __Vtemp_28;
    std::string __Vtemp_29;
    std::string __Vtemp_30;
    std::string __Vtemp_31;
    std::string __Vtemp_32;
    std::string __Vtemp_33;
    std::string __Vtemp_34;
    std::string __Vtemp_35;
    std::string __Vtemp_36;
    std::string __Vtemp_37;
    std::string __Vtemp_38;
    std::string __Vtemp_39;
    std::string __Vtemp_40;
    std::string __Vtemp_41;
    std::string __Vtemp_42;
    std::string __Vtemp_43;
    std::string __Vtemp_44;
    std::string __Vtemp_45;
    std::string __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_49;
    std::string __Vtemp_50;
    std::string __Vtemp_51;
    std::string __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_55;
    std::string __Vtemp_56;
    std::string __Vtemp_57;
    std::string __Vtemp_58;
    std::string __Vtemp_59;
    std::string __Vtemp_60;
    std::string __Vtemp_61;
    std::string __Vtemp_62;
    std::string __Vtemp_63;
    std::string __Vtemp_64;
    std::string __Vtemp_65;
    // Body
    if (((IData)(vlSelf->clarvi_sim__DOT__external_access) 
         & (IData)(vlSelf->clarvi_sim__DOT__main_write))) {
        if (VL_UNLIKELY((0x4000000U == VL_SHIFTL_III(32,32,32, vlSelf->clarvi_sim__DOT__main_address, 2U)))) {
            VL_WRITEF("LED write, address %x, data %x\n",
                      29,(0x1fffffffU & VL_SHIFTL_III(29,29,32, vlSelf->clarvi_sim__DOT__main_address, 2U)),
                      32,vlSelf->clarvi_sim__DOT__main_writedata);
        } else if (VL_UNLIKELY((0x4000080U == VL_SHIFTL_III(32,32,32, vlSelf->clarvi_sim__DOT__main_address, 2U)))) {
            VL_WRITEF("HEX write, address %x, data %x\n",
                      29,(0x1fffffffU & VL_SHIFTL_III(29,29,32, vlSelf->clarvi_sim__DOT__main_address, 2U)),
                      32,vlSelf->clarvi_sim__DOT__main_writedata);
        }
    }
    __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v0 = 0U;
    __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v1 = 0U;
    __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v2 = 0U;
    __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v3 = 0U;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__bubble_counter 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__bubble_counter;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_taken 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_taken;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_mem_address 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_mem_address;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs1_value 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs1_value;
    __Vdlyvset__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0 = 0U;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie;
    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus;
    if ((1U & ((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_invalid)) 
               & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_wait))))) {
        if ((((0x1cU == (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                  >> 4U))) || (0x1dU 
                                               == (0x1fU 
                                                   & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                                      >> 4U)))) 
             || (0x1eU == (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                    >> 4U))))) {
            if (VL_UNLIKELY((0x800U == (0xfffU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                                  >> 6U))))) {
                VL_WRITEF("******************************************************************************\n");
                __Vtemp_1 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                  >> 0x1aU)));
                VL_WRITEF("* Debug output: %@ = 0x%x = %10#\n******************************************************************************\n",
                          -1,&(__Vtemp_1),32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch,
                          32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch);
            } else if (VL_UNLIKELY((0x801U == (0xfffU 
                                               & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                                  >> 6U))))) {
                VL_WRITEF("%c",32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch);
            } else if (VL_UNLIKELY((0x802U == (0xfffU 
                                               & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                                  >> 6U))))) {
                VL_WRITEF("0x%x",32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch);
            }
        }
    }
    if ((1U & ((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_invalid)) 
               & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_wait))))) {
        if (VL_UNLIKELY(((0x18U == (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[3U] 
                                             >> 4U))) 
                         || (0x1fU == (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[3U] 
                                                >> 4U)))))) {
            VL_WRITEF("time: %0#, %32# instruction at %x, stopping simulator\n",
                      64,VL_TIME_UNITED_Q(100),105,
                      vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr.data(),
                      32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[0U]);
            VL_STOP_MT("clarvi_debug.sv", 53, "");
        }
    }
    if (vlSelf->clarvi_sim__DOT____Vcellinp__mem__avs_a_write) {
        if ((1U & (IData)(vlSelf->clarvi_sim__DOT__main_byteenable))) {
            __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v0 
                = (0xffU & vlSelf->clarvi_sim__DOT__main_writedata);
            __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v0 = 1U;
            __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v0 = 0U;
            __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v0 
                = (0x3fffU & vlSelf->clarvi_sim__DOT__main_address);
        }
        if ((2U & (IData)(vlSelf->clarvi_sim__DOT__main_byteenable))) {
            __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v1 
                = (0xffU & (vlSelf->clarvi_sim__DOT__main_writedata 
                            >> 8U));
            __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v1 = 1U;
            __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v1 = 8U;
            __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v1 
                = (0x3fffU & vlSelf->clarvi_sim__DOT__main_address);
        }
        if ((4U & (IData)(vlSelf->clarvi_sim__DOT__main_byteenable))) {
            __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v2 
                = (0xffU & (vlSelf->clarvi_sim__DOT__main_writedata 
                            >> 0x10U));
            __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v2 = 1U;
            __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v2 = 0x10U;
            __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v2 
                = (0x3fffU & vlSelf->clarvi_sim__DOT__main_address);
        }
        if ((8U & (IData)(vlSelf->clarvi_sim__DOT__main_byteenable))) {
            __Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v3 
                = (vlSelf->clarvi_sim__DOT__main_writedata 
                   >> 0x18U);
            __Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v3 = 1U;
            __Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v3 = 0x18U;
            __Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v3 
                = (0x3fffU & vlSelf->clarvi_sim__DOT__main_address);
        }
    }
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles 
        = (1ULL + vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__cycles);
    if ((1U & ((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_wait)) 
               & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_invalid))))) {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret 
            = (1ULL + vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instret);
    }
    if ((1U & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_wait)))) {
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs1_value 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs1_value;
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs2_value;
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_mem_address 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address;
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_target;
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_taken 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_taken;
    }
    {
        __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result = 
            std::string{""};
        __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values = 
            std::string{""};
        __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__csr 
            = (0xfffU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                         >> 6U));
        VL_WRITEF("time=%08#  pc=0x%x:   ",64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(100)), 0xaULL),
                  32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[0U]);
        if (VL_UNLIKELY(((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_invalid) 
                         | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_wait)))) {
            __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__bubble_counter 
                = (1ULL + vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__bubble_counter);
            VL_WRITEF("---bubble number %1# ---\n",
                      64,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__bubble_counter);
            goto __Vlabel1;
        }
        if ((1U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U])) {
            __Vtemp_4 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                               << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                         >> 0x1fU))));
            __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result 
                = VL_SFORMATF_NX("%@ := 0x%x",-1,&(__Vtemp_4),
                                 32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_result) ;
        }
        if ((IData)((0x180000U == (0x180000U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U])))) {
            __Vtemp_5 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                              >> 0x1aU)));
            __Vtemp_6 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                              >> 0x15U)));
            __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values 
                = VL_SFORMATF_NX("%@ = 0x%x, %@ = 0x%x",
                                 -1,&(__Vtemp_5),32,
                                 vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs1_value,
                                 -1,&(__Vtemp_6),32,
                                 vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value) ;
        } else if ((0x100000U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U])) {
            __Vtemp_7 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                              >> 0x1aU)));
            __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values 
                = VL_SFORMATF_NX("%@ = 0x%x",-1,&(__Vtemp_7),
                                 32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs1_value) ;
        } else if ((0x80000U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U])) {
            __Vtemp_8 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                              >> 0x15U)));
            __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values 
                = VL_SFORMATF_NX("%@ = 0x%x",-1,&(__Vtemp_8),
                                 32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value) ;
        }
        if ((0x100U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U])) {
            if ((0x80U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U])) {
                if (VL_LIKELY((0x40U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U]))) {
                    if (VL_LIKELY((0x20U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U]))) {
                        if ((0x10U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U])) {
                            __Vtemp_9 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                                .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                              >> 4U)));
                            VL_WRITEF("%@",-1,&(__Vtemp_9));
                        } else {
                            __Vtemp_10 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                                .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                              >> 4U)));
                            __Vtemp_11 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                                .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                               << 1U) 
                                              | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                 >> 0x1fU))));
                            __Vtemp_12 = Vclarvi_sim___024unit::__Venumtab_enum_name3
                                .at((IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__csr));
                            __Vtemp_13 = ((0x40000U 
                                           & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U])
                                           ? VL_SFORMATF_NX("%0#",
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                                >> 0x1aU))) 
                                           : Vclarvi_sim___024unit::__Venumtab_enum_name0
                                          .at((0x1fU 
                                               & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                  >> 0x1aU))));
                            VL_WRITEF("%@\t%@, %@, %@",
                                      -1,&(__Vtemp_10),
                                      -1,&(__Vtemp_11),
                                      -1,&(__Vtemp_12),
                                      -1,&(__Vtemp_13));
                        }
                    } else {
                        __Vtemp_14 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                            .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                          >> 4U)));
                        __Vtemp_15 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                            .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                           << 1U) | 
                                          (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                           >> 0x1fU))));
                        __Vtemp_16 = Vclarvi_sim___024unit::__Venumtab_enum_name3
                            .at((IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__csr));
                        __Vtemp_17 = ((0x40000U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U])
                                       ? VL_SFORMATF_NX("%0#",
                                                        5,
                                                        (0x1fU 
                                                         & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                            >> 0x1aU))) 
                                       : Vclarvi_sim___024unit::__Venumtab_enum_name0
                                      .at((0x1fU & 
                                           (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                            >> 0x1aU))));
                        VL_WRITEF("%@\t%@, %@, %@",
                                  -1,&(__Vtemp_14),
                                  -1,&(__Vtemp_15),
                                  -1,&(__Vtemp_16),
                                  -1,&(__Vtemp_17));
                    }
                } else {
                    __Vtemp_18 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                      >> 4U)));
                    VL_WRITEF("%@",-1,&(__Vtemp_18));
                }
            } else if ((0x40U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U])) {
                if (VL_UNLIKELY((0x20U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U]))) {
                    __Vtemp_19 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                      >> 4U)));
                    VL_WRITEF("%@",-1,&(__Vtemp_19));
                } else if ((0x40000U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U])) {
                    __Vtemp_20 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                      >> 4U)));
                    __Vtemp_21 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                       << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                 >> 0x1fU))));
                    __Vtemp_22 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                      >> 0x1aU)));
                    VL_WRITEF("%@I\t%@, %@, %0d\t\t%@, %@",
                              -1,&(__Vtemp_20),-1,&(__Vtemp_21),
                              -1,&(__Vtemp_22),32,(
                                                   (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                    << 0xeU) 
                                                   | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                                      >> 0x12U)),
                              -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result),
                              -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values));
                } else {
                    __Vtemp_23 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                      >> 4U)));
                    __Vtemp_24 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                       << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                 >> 0x1fU))));
                    __Vtemp_25 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                      >> 0x1aU)));
                    __Vtemp_26 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                      >> 0x15U)));
                    VL_WRITEF("%@\t%@, %@, %@\t\t%@, %@",
                              -1,&(__Vtemp_23),-1,&(__Vtemp_24),
                              -1,&(__Vtemp_25),-1,&(__Vtemp_26),
                              -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result),
                              -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values));
                }
            } else if ((0x40000U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U])) {
                __Vtemp_27 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                  >> 4U)));
                __Vtemp_28 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                    .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                   << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                             >> 0x1fU))));
                __Vtemp_29 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                  >> 0x1aU)));
                VL_WRITEF("%@I\t%@, %@, %0d\t\t%@, %@",
                          -1,&(__Vtemp_27),-1,&(__Vtemp_28),
                          -1,&(__Vtemp_29),32,((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                << 0xeU) 
                                               | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                                  >> 0x12U)),
                          -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result),
                          -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values));
            } else {
                __Vtemp_30 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                  >> 4U)));
                __Vtemp_31 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                    .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                   << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                             >> 0x1fU))));
                __Vtemp_32 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                  >> 0x1aU)));
                __Vtemp_33 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                  >> 0x15U)));
                VL_WRITEF("%@\t%@, %@, %@\t\t%@, %@",
                          -1,&(__Vtemp_30),-1,&(__Vtemp_31),
                          -1,&(__Vtemp_32),-1,&(__Vtemp_33),
                          -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result),
                          -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values));
            }
        } else if ((0x80U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U])) {
            if ((0x40U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U])) {
                if ((0x40000U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U])) {
                    __Vtemp_34 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                      >> 4U)));
                    __Vtemp_35 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                       << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                 >> 0x1fU))));
                    __Vtemp_36 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                      >> 0x1aU)));
                    VL_WRITEF("%@I\t%@, %@, %0d\t\t%@, %@",
                              -1,&(__Vtemp_34),-1,&(__Vtemp_35),
                              -1,&(__Vtemp_36),32,(
                                                   (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                    << 0xeU) 
                                                   | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                                      >> 0x12U)),
                              -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result),
                              -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values));
                } else {
                    __Vtemp_37 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                      >> 4U)));
                    __Vtemp_38 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                       << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                 >> 0x1fU))));
                    __Vtemp_39 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                      >> 0x1aU)));
                    __Vtemp_40 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                      >> 0x15U)));
                    VL_WRITEF("%@\t%@, %@, %@\t\t%@, %@",
                              -1,&(__Vtemp_37),-1,&(__Vtemp_38),
                              -1,&(__Vtemp_39),-1,&(__Vtemp_40),
                              -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result),
                              -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values));
                }
            } else if (VL_LIKELY((0x20U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U]))) {
                if ((0x10U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U])) {
                    __Vtemp_41 = Vclarvi_sim___024unit::__Venumtab_enum_name2
                        [(3U & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                >> 1U))];
                    __Vtemp_42 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                      >> 0x15U)));
                    __Vtemp_43 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                      >> 0x1aU)));
                    VL_WRITEF("S%@\t%@, %0d(%@)\t\tmem[%x] := 0x%x, %@",
                              -1,&(__Vtemp_41),-1,&(__Vtemp_42),
                              32,((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                   << 0xeU) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                               >> 0x12U)),
                              -1,&(__Vtemp_43),32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_mem_address,
                              32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value,
                              -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values));
                } else {
                    __Vtemp_44 = Vclarvi_sim___024unit::__Venumtab_enum_name2
                        [(3U & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                >> 1U))];
                    __Vtemp_45 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                       << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                 >> 0x1fU))));
                    __Vtemp_46 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                        .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                      >> 0x1aU)));
                    VL_WRITEF("L%@%s\t%@, %0d(%@)\t\t%@ = mem[0x%x], %@",
                              -1,&(__Vtemp_44),8,((8U 
                                                   & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U])
                                                   ? 0x55U
                                                   : 0U),
                              -1,&(__Vtemp_45),32,(
                                                   (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                    << 0xeU) 
                                                   | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                                      >> 0x12U)),
                              -1,&(__Vtemp_46),-1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result),
                              32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_mem_address,
                              -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values));
                }
            } else {
                __Vtemp_49[0U] = 0x616b656eU;
                if (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_taken) {
                    __Vtemp_49[1U] = 0x74U;
                    __Vtemp_49[2U] = 0U;
                } else {
                    __Vtemp_49[1U] = 0x6f742074U;
                    __Vtemp_49[2U] = 0x6eU;
                }
                __Vtemp_50 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                  >> 4U)));
                __Vtemp_51 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                  >> 0x1aU)));
                __Vtemp_52 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                  >> 0x15U)));
                VL_WRITEF("%@\t%@, %@, 0x%x\t%@, branch %s",
                          -1,&(__Vtemp_50),-1,&(__Vtemp_51),
                          -1,&(__Vtemp_52),32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target,
                          -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values),
                          72,__Vtemp_49.data());
            }
        } else if (VL_UNLIKELY((0x40U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U]))) {
            __Vtemp_55[0U] = 0x616b656eU;
            if (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_taken) {
                __Vtemp_55[1U] = 0x74U;
                __Vtemp_55[2U] = 0U;
            } else {
                __Vtemp_55[1U] = 0x6f742074U;
                __Vtemp_55[2U] = 0x6eU;
            }
            __Vtemp_56 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                              >> 4U)));
            __Vtemp_57 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                              >> 0x1aU)));
            __Vtemp_58 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                              >> 0x15U)));
            VL_WRITEF("%@\t%@, %@, 0x%x\t%@, branch %s",
                      -1,&(__Vtemp_56),-1,&(__Vtemp_57),
                      -1,&(__Vtemp_58),32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target,
                      -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values),
                      72,__Vtemp_55.data());
        } else if (VL_LIKELY((0x20U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U]))) {
            if ((0x10U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U])) {
                __Vtemp_59 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                  >> 4U)));
                __Vtemp_60 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                    .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                   << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                             >> 0x1fU))));
                __Vtemp_61 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                  >> 0x1aU)));
                VL_WRITEF("%@\t%@, %@, %0d\t\t%@, %@, target = 0x%x",
                          -1,&(__Vtemp_59),-1,&(__Vtemp_60),
                          -1,&(__Vtemp_61),32,((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                                << 0xeU) 
                                               | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                                  >> 0x12U)),
                          -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result),
                          -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_values),
                          32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target);
            } else {
                __Vtemp_62 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                    .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                  >> 4U)));
                __Vtemp_63 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                    .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                                   << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                             >> 0x1fU))));
                VL_WRITEF("%@\t%@, %0d\t\t\ttarget = 0x%x",
                          -1,&(__Vtemp_62),-1,&(__Vtemp_63),
                          32,((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                               << 0xeU) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                           >> 0x12U)),
                          32,vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target);
                if (VL_UNLIKELY((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target 
                                 == vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[0U]))) {
                    VL_FINISH_MT("clarvi_debug.sv", 115, "");
                }
            }
        } else {
            __Vtemp_64 = Vclarvi_sim___024unit::__Venumtab_enum_name1
                .at((0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                              >> 4U)));
            __Vtemp_65 = Vclarvi_sim___024unit::__Venumtab_enum_name0
                .at((0x1fU & ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
                               << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                         >> 0x1fU))));
            VL_WRITEF("%@\t%@, 0x%x\t\t%@",-1,&(__Vtemp_64),
                      -1,&(__Vtemp_65),32,((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
                                            << 0xeU) 
                                           | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
                                              >> 0x12U)),
                      -1,&(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__print_instruction__21__register_result));
        }
        VL_WRITEF("\n");
        __Vlabel1: ;
    }
    if ((1U & ((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_wait)) 
               & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_invalid))))) {
        if ((1U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[1U])) {
            vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT____Vlvbound_h97a065f5__0 
                = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_value;
            if ((0x1eU >= (0x1fU & (((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[3U] 
                                      << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[2U] 
                                                >> 0x1fU)) 
                                    - (IData)(1U))))) {
                __Vdlyvval__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0 
                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT____Vlvbound_h97a065f5__0;
                __Vdlyvset__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0 = 1U;
                __Vdlyvdim0__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0 
                    = (0x1fU & (((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[3U] 
                                  << 1U) | (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[2U] 
                                            >> 0x1fU)) 
                                - (IData)(1U)));
            }
        }
    }
    if (vlSelf->clarvi_sim__DOT__main_read) {
        vlSelf->clarvi_sim__DOT____Vcellout__mem__avs_a_readdata 
            = vlSelf->clarvi_sim__DOT__mem__DOT__memory
            [(0x3fffU & vlSelf->clarvi_sim__DOT__main_address)];
    }
    if ((1U & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_if)))) {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_instr 
            = ((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_stall_on_prev)
                ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instr_read_data_buffer
                : vlSelf->clarvi_sim__DOT____Vcellout__mem__avs_b_readdata);
    }
    if ((1U & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_stall_on_prev)))) {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__instr_read_data_buffer 
            = vlSelf->clarvi_sim__DOT____Vcellout__mem__avs_b_readdata;
    }
    if ((1U & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid)))) {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__potential_mepc 
            = ((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_taken)
                ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_target
                : vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_pc);
    }
    if ((1U & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_ex)))) {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_result 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_result;
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_word_offset 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset;
    }
    if (((((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_if)) 
           & (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_exception)) 
          | ((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_ex)) 
             & (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_exception))) 
         | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__interrupt))) {
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
            = ((0xffffff7fU & __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus) 
               | (0x80U & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
                           << 4U)));
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
            = (0xfffffff7U & __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus);
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__trap_pc;
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__trap_pc;
        {
            if ((8U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus)) {
                if ((0x800U & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip 
                               & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie))) {
                    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 0x8000000bU;
                    goto __Vlabel2;
                }
                if ((8U & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip 
                           & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie))) {
                    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 0x80000003U;
                    goto __Vlabel2;
                }
                if ((0x80U & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mip 
                              & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie))) {
                    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 0x80000007U;
                    goto __Vlabel2;
                }
            }
            if ((vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc 
                 >> 0x1fU)) {
                __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 1U;
                goto __Vlabel2;
            }
            if ((1U & (~ ([&]() {
                                __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__width = 2U;
                                __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__word_offset 
                                    = (3U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc);
                                {
                                    if ((2U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__width))) {
                                        __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__Vfuncout 
                                            = (0U == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__word_offset));
                                        goto __Vlabel3;
                                    } else if ((1U 
                                                == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__width))) {
                                        __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__Vfuncout 
                                            = (1U & 
                                               (~ (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__word_offset)));
                                        goto __Vlabel3;
                                    } else {
                                        __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__Vfuncout = 1U;
                                        goto __Vlabel3;
                                    }
                                    __Vlabel3: ;
                                }
                            }(), (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__17__Vfuncout))))) {
                __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 0U;
                goto __Vlabel2;
            }
            if ((0x100U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U])) {
                if ((0x80U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U])) {
                    if ((0x40U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U])) {
                        if ((0x20U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U])) {
                            if ((0x10U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U])) {
                                __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 2U;
                                goto __Vlabel2;
                            }
                        }
                    } else if ((1U & (~ (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                                         >> 5U)))) {
                        if ((0x10U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U])) {
                            __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 3U;
                            goto __Vlabel2;
                        } else {
                            __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 0xbU;
                            goto __Vlabel2;
                        }
                    }
                }
            } else if ((0x80U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U])) {
                if ((1U & (~ (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                              >> 6U)))) {
                    if ((0x20U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U])) {
                        if ((0x10U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U])) {
                            if (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits) {
                                __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 7U;
                                goto __Vlabel2;
                            } else if ((1U & (~ ([&]() {
                                                __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__width 
                                                    = 
                                                    (3U 
                                                     & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U] 
                                                        >> 1U));
                                                __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__word_offset 
                                                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset;
                                                {
                                                    if (
                                                        (2U 
                                                         == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__width))) {
                                                        __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__Vfuncout 
                                                            = 
                                                            (0U 
                                                             == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__word_offset));
                                                        goto __Vlabel4;
                                                    } else if (
                                                               (1U 
                                                                == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__width))) {
                                                        __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__Vfuncout 
                                                            = 
                                                            (1U 
                                                             & (~ (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__word_offset)));
                                                        goto __Vlabel4;
                                                    } else {
                                                        __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__Vfuncout = 1U;
                                                        goto __Vlabel4;
                                                    }
                                                    __Vlabel4: ;
                                                }
                                            }(), (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__18__Vfuncout))))) {
                                __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 6U;
                                goto __Vlabel2;
                            }
                        } else if (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_address_high_bits) {
                            __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 5U;
                            goto __Vlabel2;
                        } else if ((1U & (~ ([&]() {
                                            __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__width 
                                                = (3U 
                                                   & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U] 
                                                      >> 1U));
                                            __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__word_offset 
                                                = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_word_offset;
                                            {
                                                if (
                                                    (2U 
                                                     == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__width))) {
                                                    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__Vfuncout 
                                                        = 
                                                        (0U 
                                                         == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__word_offset));
                                                    goto __Vlabel5;
                                                } else if (
                                                           (1U 
                                                            == (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__width))) {
                                                    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__Vfuncout 
                                                        = 
                                                        (1U 
                                                         & (~ (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__word_offset)));
                                                    goto __Vlabel5;
                                                } else {
                                                    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__Vfuncout = 1U;
                                                    goto __Vlabel5;
                                                }
                                                __Vlabel5: ;
                                            }
                                        }(), (IData)(__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_aligned__19__Vfuncout))))) {
                            __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 4U;
                            goto __Vlabel2;
                        }
                    }
                }
            }
            __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout = 0U;
            __Vlabel2: ;
        }
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause 
            = __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__get_trap_cause__16__Vfuncout;
    }
    if ((1U & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_wait)))) {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_value 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_result;
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[0U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[0U];
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[1U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U];
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[2U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U];
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_instr[3U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U];
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ma_wb_invalid 
            = ((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_invalid) 
               | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_for_memory_pending));
    }
    if ((1U & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_ex)))) {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[0U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[0U];
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[1U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U];
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[2U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[2U];
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_instr[3U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U];
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_ma_invalid 
            = ((((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid) 
                 | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__interrupt)) 
                | ((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_mem_address_error) 
                   & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U] 
                      >> 4U))) | (0x1fU == (0x1fU & 
                                            (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                                             >> 4U))));
    }
    if ((((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_ex)) 
          & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid))) 
         & (0x1a0U == (0x1f0U & vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U])))) {
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
            = ((0xfffffff7U & __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus) 
               | (8U & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
                        >> 4U)));
        __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
            = (0x80U | __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus);
    }
    if ((1U & (((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_ex)) 
                & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid))) 
               & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__interrupt))))) {
        __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__rs1_value 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs1_value;
        __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[0U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[0U];
        __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[1U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U];
        __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[2U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[2U];
        __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U];
        __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value 
            = ((0x40000U & __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[2U])
                ? (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[2U] 
                            >> 0x1aU)) : __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__rs1_value);
        __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr 
            = (0xfffU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[1U] 
                         >> 6U));
        if (((((((((0x305U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr)) 
                   | (0x300U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) 
                  | (0x304U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) 
                 | (0x340U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) 
                | (0x341U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) 
               | (0x342U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) 
              | (0x343U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) 
             | (0x7c1U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr)))) {
            if ((0x305U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) {
                if ((0x1cU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                        >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec 
                        = __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value;
                } else if ((0x1dU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec 
                           | __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value);
                } else if ((0x1eU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec 
                           & (~ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value));
                }
            } else if ((0x300U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) {
                if ((0x1cU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                        >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
                        = __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value;
                } else if ((0x1dU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
                           | __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value);
                } else if ((0x1eU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
                           & (~ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value));
                }
            } else if ((0x304U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) {
                if ((0x1cU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                        >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie 
                        = __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value;
                } else if ((0x1dU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie 
                           | __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value);
                } else if ((0x1eU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie 
                           & (~ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value));
                }
            } else if ((0x340U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) {
                if ((0x1cU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                        >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch 
                        = __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value;
                } else if ((0x1dU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch 
                           | __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value);
                } else if ((0x1eU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch 
                           & (~ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value));
                }
            } else if ((0x341U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) {
                if ((0x1cU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                        >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc 
                        = __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value;
                } else if ((0x1dU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc 
                           | __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value);
                } else if ((0x1eU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc 
                           & (~ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value));
                }
            } else if ((0x342U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) {
                if ((0x1cU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                        >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause 
                        = __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value;
                } else if ((0x1dU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause 
                           | __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value);
                } else if ((0x1eU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause 
                           & (~ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value));
                }
            } else if ((0x343U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) {
                if ((0x1cU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                        >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr 
                        = __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value;
                } else if ((0x1dU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr 
                           | __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value);
                } else if ((0x1eU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                               >> 4U)))) {
                    __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr 
                        = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr 
                           & (~ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value));
                }
            } else if ((0x1cU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                           >> 4U)))) {
                __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                    = ((0xffffffff00000000ULL & __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp) 
                       | (IData)((IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value)));
            } else if ((0x1dU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                           >> 4U)))) {
                __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                    = ((0xffffffff00000000ULL & __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp) 
                       | (IData)((IData)(((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp) 
                                          | __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value))));
            } else if ((0x1eU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                           >> 4U)))) {
                __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                    = ((0xffffffff00000000ULL & __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp) 
                       | (IData)((IData)(((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp) 
                                          & (~ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value)))));
            }
        } else if ((0x7c2U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) {
            if ((0x1cU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                    >> 4U)))) {
                __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                    = ((0xffffffffULL & __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp) 
                       | ((QData)((IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value)) 
                          << 0x20U));
            } else if ((0x1dU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                           >> 4U)))) {
                __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                    = ((0xffffffffULL & __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp) 
                       | ((QData)((IData)(((IData)(
                                                   (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                                                    >> 0x20U)) 
                                           | __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value))) 
                          << 0x20U));
            } else if ((0x1eU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                           >> 4U)))) {
                __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                    = ((0xffffffffULL & __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp) 
                       | ((QData)((IData)(((IData)(
                                                   (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
                                                    >> 0x20U)) 
                                           & (~ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value)))) 
                          << 0x20U));
            }
        } else if (((((0x7b2U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr)) 
                      || (0x800U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) 
                     || (0x801U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr))) 
                    || (0x802U == (IData)(__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__csr_addr)))) {
            if ((0x1cU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                    >> 4U)))) {
                __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch 
                    = __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value;
            } else if ((0x1dU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                           >> 4U)))) {
                __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch 
                    = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch 
                       | __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value);
            } else if ((0x1eU == (0x1fU & (__Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__instr[3U] 
                                           >> 4U)))) {
                __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch 
                    = (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch 
                       & (~ __Vtask_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__execute_csr__20__value));
            }
        }
    }
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs1_value 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs1_value;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_rs2_value;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_mem_address 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_mem_address;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_target;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_taken 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__db_branch_taken;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__bubble_counter 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__bubble_counter;
    if (__Vdlyvset__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0) {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers[__Vdlyvdim0__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0] 
            = __Vdlyvval__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__registers__v0;
    }
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mbadaddr;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mcause;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mscratch;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__dscratch;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mstatus;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mie;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__timecmp;
    if ((1U & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_de)))) {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs2_value 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs2_forward;
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs1_value 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_rs1_forward;
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[0U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[0U];
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[1U];
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[2U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[2U];
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_instr[3U];
    }
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_stall_on_prev 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_if;
    vlSelf->clarvi_sim__DOT____Vcellout__mem__avs_b_readdata 
        = vlSelf->clarvi_sim__DOT__mem__DOT__memory
        [(0x3fffU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc 
                     >> 2U))];
    if (__Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v0) {
        vlSelf->clarvi_sim__DOT__mem__DOT__memory[__Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v0))) 
                & vlSelf->clarvi_sim__DOT__mem__DOT__memory
                [__Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v0) 
                                   << (IData)(__Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v0))));
    }
    if (__Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v1) {
        vlSelf->clarvi_sim__DOT__mem__DOT__memory[__Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v1))) 
                & vlSelf->clarvi_sim__DOT__mem__DOT__memory
                [__Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v1) 
                                   << (IData)(__Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v1))));
    }
    if (__Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v2) {
        vlSelf->clarvi_sim__DOT__mem__DOT__memory[__Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v2))) 
                & vlSelf->clarvi_sim__DOT__mem__DOT__memory
                [__Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v2) 
                                   << (IData)(__Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v2))));
    }
    if (__Vdlyvset__clarvi_sim__DOT__mem__DOT__memory__v3) {
        vlSelf->clarvi_sim__DOT__mem__DOT__memory[__Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v3))) 
                & vlSelf->clarvi_sim__DOT__mem__DOT__memory
                [__Vdlyvdim0__clarvi_sim__DOT__mem__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__clarvi_sim__DOT__mem__DOT__memory__v3) 
                                   << (IData)(__Vdlyvlsb__clarvi_sim__DOT__mem__DOT__memory__v3))));
    }
    if (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_de) {
        if ((1U & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_ex)))) {
            vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid = 1U;
        }
    } else {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid 
            = ((((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_invalid) 
                 | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__interrupt)) 
                | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_exception)) 
               | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_taken));
    }
    if ((1U & (~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__stall_if)))) {
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_pc 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_pc;
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_pc 
            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc;
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc 
            = (((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_exception) 
                | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_exception))
                ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec
                : vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_next_pc);
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_de_invalid 
            = ((((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_invalid) 
                 | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__interrupt)) 
                | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_exception)) 
               | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_taken));
        vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_invalid 
            = ((((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__interrupt) 
                 | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_exception)) 
                | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__if_exception)) 
               | (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_taken));
    }
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec 
        = __Vdly__clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mtvec;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_taken 
        = ((~ (IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_invalid)) 
           & ([&]() {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value 
                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs2_value;
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value 
                    = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs1_value;
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation 
                    = (0x1fU & (vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U] 
                                >> 4U));
                {
                    if ((0x10U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                        if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                                goto __Vlabel6;
                            } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                                    goto __Vlabel6;
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 1U;
                                    goto __Vlabel6;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                                goto __Vlabel6;
                            }
                        } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 1U;
                                    goto __Vlabel6;
                                } else {
                                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                                    goto __Vlabel6;
                                }
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                                goto __Vlabel6;
                            }
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                    } else if ((8U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                        if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                            goto __Vlabel6;
                        } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                            goto __Vlabel6;
                        } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                = (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value 
                                   >= vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                            goto __Vlabel6;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                = (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value 
                                   < vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                            goto __Vlabel6;
                        }
                    } else if ((4U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                        if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                    = VL_GTES_III(32, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                                goto __Vlabel6;
                            } else {
                                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                    = VL_LTS_III(32, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value, vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                                goto __Vlabel6;
                            }
                        } else if ((1U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                = (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value 
                                   != vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                            goto __Vlabel6;
                        } else {
                            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout 
                                = (vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs1_value 
                                   == vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__rs2_value);
                            goto __Vlabel6;
                        }
                    } else if ((2U & (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__operation))) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 1U;
                        goto __Vlabel6;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout = 0U;
                        goto __Vlabel6;
                    }
                    __Vlabel6: ;
                }
            }(), (IData)(vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__is_branch_taken__10__Vfuncout)));
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__rs1_value 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_rs1_value;
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[0U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[0U];
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[1U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[1U];
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[2U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[2U];
    __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U] 
        = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__de_ex_instr[3U];
    {
        if ((0x100U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
            if ((0x80U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                    goto __Vlabel7;
                } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                    if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                        goto __Vlabel7;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                            = vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__mepc;
                        goto __Vlabel7;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                    goto __Vlabel7;
                }
            } else if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                    if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                            = ((IData)(4U) + __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[0U]);
                        goto __Vlabel7;
                    } else {
                        vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                        goto __Vlabel7;
                    }
                } else {
                    vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                    goto __Vlabel7;
                }
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                goto __Vlabel7;
            }
        } else if ((0x80U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
            if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                goto __Vlabel7;
            } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
                goto __Vlabel7;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                    = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[0U] 
                       + ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[2U] 
                           << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[1U] 
                                       >> 0x12U)));
                goto __Vlabel7;
            }
        } else if ((0x40U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[0U] 
                   + ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[2U] 
                       << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[1U] 
                                   >> 0x12U)));
            goto __Vlabel7;
        } else if ((0x20U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
            if ((0x10U & __Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[3U])) {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                    = (0xfffffffeU & (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__rs1_value 
                                      + ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[2U] 
                                          << 0xeU) 
                                         | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[1U] 
                                            >> 0x12U))));
                goto __Vlabel7;
            } else {
                vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout 
                    = (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[0U] 
                       + ((__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[2U] 
                           << 0xeU) | (__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__instr[1U] 
                                       >> 0x12U)));
                goto __Vlabel7;
            }
        } else {
            vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout = 0U;
            goto __Vlabel7;
        }
        __Vlabel7: ;
    }
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_target 
        = vlSelf->__Vfunc_clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__target_pc__11__Vfuncout;
    vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_next_pc 
        = ((IData)(vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_taken)
            ? vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__ex_branch_target
            : ((IData)(4U) + vlSelf->clarvi_sim__DOT__clarvi__DOT__clarvi__DOT__pc));
}
