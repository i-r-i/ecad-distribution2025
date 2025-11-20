// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclarvi_sim.h for the primary calling header

#include "Vclarvi_sim__pch.h"
#include "Vclarvi_sim___024unit.h"

VL_ATTR_COLD void Vclarvi_sim___024unit___ctor_var_reset(Vclarvi_sim___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclarvi_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vclarvi_sim___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__Venumtab_enum_name0.atDefault() = std::string{""};
    vlSelf->__Venumtab_enum_name0.at(0) = std::string{"zero"};
    vlSelf->__Venumtab_enum_name0.at(1) = std::string{"ra"};
    vlSelf->__Venumtab_enum_name0.at(2) = std::string{"sp"};
    vlSelf->__Venumtab_enum_name0.at(3) = std::string{"gp"};
    vlSelf->__Venumtab_enum_name0.at(4) = std::string{"tp"};
    vlSelf->__Venumtab_enum_name0.at(5) = std::string{"t0"};
    vlSelf->__Venumtab_enum_name0.at(6) = std::string{"t1"};
    vlSelf->__Venumtab_enum_name0.at(7) = std::string{"t2"};
    vlSelf->__Venumtab_enum_name0.at(8) = std::string{"fp"};
    vlSelf->__Venumtab_enum_name0.at(9) = std::string{"s1"};
    vlSelf->__Venumtab_enum_name0.at(10) = std::string{"a0"};
    vlSelf->__Venumtab_enum_name0.at(11) = std::string{"a1"};
    vlSelf->__Venumtab_enum_name0.at(12) = std::string{"a2"};
    vlSelf->__Venumtab_enum_name0.at(13) = std::string{"a3"};
    vlSelf->__Venumtab_enum_name0.at(14) = std::string{"a4"};
    vlSelf->__Venumtab_enum_name0.at(15) = std::string{"a5"};
    vlSelf->__Venumtab_enum_name0.at(16) = std::string{"a6"};
    vlSelf->__Venumtab_enum_name0.at(17) = std::string{"a7"};
    vlSelf->__Venumtab_enum_name0.at(18) = std::string{"s2"};
    vlSelf->__Venumtab_enum_name0.at(19) = std::string{"s3"};
    vlSelf->__Venumtab_enum_name0.at(20) = std::string{"s4"};
    vlSelf->__Venumtab_enum_name0.at(21) = std::string{"s5"};
    vlSelf->__Venumtab_enum_name0.at(22) = std::string{"s6"};
    vlSelf->__Venumtab_enum_name0.at(23) = std::string{"s7"};
    vlSelf->__Venumtab_enum_name0.at(24) = std::string{"s8"};
    vlSelf->__Venumtab_enum_name0.at(25) = std::string{"s9"};
    vlSelf->__Venumtab_enum_name0.at(26) = std::string{"s10"};
    vlSelf->__Venumtab_enum_name0.at(27) = std::string{"s11"};
    vlSelf->__Venumtab_enum_name0.at(28) = std::string{"t3"};
    vlSelf->__Venumtab_enum_name0.at(29) = std::string{"t4"};
    vlSelf->__Venumtab_enum_name0.at(30) = std::string{"t5"};
    vlSelf->__Venumtab_enum_name0.at(31) = std::string{"t6"};
    vlSelf->__Venumtab_enum_name1.atDefault() = std::string{""};
    vlSelf->__Venumtab_enum_name1.at(0) = std::string{"LUI"};
    vlSelf->__Venumtab_enum_name1.at(1) = std::string{"AUIPC"};
    vlSelf->__Venumtab_enum_name1.at(2) = std::string{"JAL"};
    vlSelf->__Venumtab_enum_name1.at(3) = std::string{"JALR"};
    vlSelf->__Venumtab_enum_name1.at(4) = std::string{"BEQ"};
    vlSelf->__Venumtab_enum_name1.at(5) = std::string{"BNE"};
    vlSelf->__Venumtab_enum_name1.at(6) = std::string{"BLT"};
    vlSelf->__Venumtab_enum_name1.at(7) = std::string{"BGE"};
    vlSelf->__Venumtab_enum_name1.at(8) = std::string{"BLTU"};
    vlSelf->__Venumtab_enum_name1.at(9) = std::string{"BGEU"};
    vlSelf->__Venumtab_enum_name1.at(10) = std::string{"LOAD"};
    vlSelf->__Venumtab_enum_name1.at(11) = std::string{"STORE"};
    vlSelf->__Venumtab_enum_name1.at(12) = std::string{"ADD"};
    vlSelf->__Venumtab_enum_name1.at(13) = std::string{"SUB"};
    vlSelf->__Venumtab_enum_name1.at(14) = std::string{"SLT"};
    vlSelf->__Venumtab_enum_name1.at(15) = std::string{"SLTU"};
    vlSelf->__Venumtab_enum_name1.at(16) = std::string{"XOR"};
    vlSelf->__Venumtab_enum_name1.at(17) = std::string{"OR"};
    vlSelf->__Venumtab_enum_name1.at(18) = std::string{"AND"};
    vlSelf->__Venumtab_enum_name1.at(19) = std::string{"SL"};
    vlSelf->__Venumtab_enum_name1.at(20) = std::string{"SRL"};
    vlSelf->__Venumtab_enum_name1.at(21) = std::string{"SRA"};
    vlSelf->__Venumtab_enum_name1.at(22) = std::string{"FENCE"};
    vlSelf->__Venumtab_enum_name1.at(23) = std::string{"FENCE_I"};
    vlSelf->__Venumtab_enum_name1.at(24) = std::string{"ECALL"};
    vlSelf->__Venumtab_enum_name1.at(25) = std::string{"EBREAK"};
    vlSelf->__Venumtab_enum_name1.at(26) = std::string{"MRET"};
    vlSelf->__Venumtab_enum_name1.at(27) = std::string{"WFI"};
    vlSelf->__Venumtab_enum_name1.at(28) = std::string{"CSRRW"};
    vlSelf->__Venumtab_enum_name1.at(29) = std::string{"CSRRS"};
    vlSelf->__Venumtab_enum_name1.at(30) = std::string{"CSRRC"};
    vlSelf->__Venumtab_enum_name1.at(31) = std::string{"INVALID"};
    for (int __Vi = 0; __Vi < 4; ++__Vi) {
        vlSelf->__Venumtab_enum_name2[__Vi] = std::string{""};
    }
    vlSelf->__Venumtab_enum_name2[0] = std::string{"B"};
    vlSelf->__Venumtab_enum_name2[1] = std::string{"H"};
    vlSelf->__Venumtab_enum_name2[2] = std::string{"W"};
    vlSelf->__Venumtab_enum_name3.atDefault() = std::string{""};
    vlSelf->__Venumtab_enum_name3.at(768) = std::string{"MSTATUS"};
    vlSelf->__Venumtab_enum_name3.at(770) = std::string{"MEDELEG"};
    vlSelf->__Venumtab_enum_name3.at(771) = std::string{"MIDELEG"};
    vlSelf->__Venumtab_enum_name3.at(772) = std::string{"MIE"};
    vlSelf->__Venumtab_enum_name3.at(773) = std::string{"MTVEC"};
    vlSelf->__Venumtab_enum_name3.at(832) = std::string{"MSCRATCH"};
    vlSelf->__Venumtab_enum_name3.at(833) = std::string{"MEPC"};
    vlSelf->__Venumtab_enum_name3.at(834) = std::string{"MCAUSE"};
    vlSelf->__Venumtab_enum_name3.at(835) = std::string{"MBADADDR"};
    vlSelf->__Venumtab_enum_name3.at(836) = std::string{"MIP"};
    vlSelf->__Venumtab_enum_name3.at(1968) = std::string{"DCSR"};
    vlSelf->__Venumtab_enum_name3.at(1969) = std::string{"DPC"};
    vlSelf->__Venumtab_enum_name3.at(1970) = std::string{"DSCRATCH"};
    vlSelf->__Venumtab_enum_name3.at(1985) = std::string{"MTIMECMP"};
    vlSelf->__Venumtab_enum_name3.at(1986) = std::string{"MTIMECMPH"};
    vlSelf->__Venumtab_enum_name3.at(2048) = std::string{"DOUTHEX"};
    vlSelf->__Venumtab_enum_name3.at(2049) = std::string{"DOUTCHAR"};
    vlSelf->__Venumtab_enum_name3.at(2050) = std::string{"DOUTINT"};
    vlSelf->__Venumtab_enum_name3.at(3072) = std::string{"CYCLE"};
    vlSelf->__Venumtab_enum_name3.at(3073) = std::string{"TIME"};
    vlSelf->__Venumtab_enum_name3.at(3074) = std::string{"INSTRET"};
    vlSelf->__Venumtab_enum_name3.at(3200) = std::string{"CYCLEH"};
    vlSelf->__Venumtab_enum_name3.at(3201) = std::string{"TIMEH"};
    vlSelf->__Venumtab_enum_name3.at(3202) = std::string{"INSTRETH"};
    vlSelf->__Venumtab_enum_name3.at(3840) = std::string{"MCYCLE"};
    vlSelf->__Venumtab_enum_name3.at(3841) = std::string{"MTIME"};
    vlSelf->__Venumtab_enum_name3.at(3842) = std::string{"MINSTRET"};
    vlSelf->__Venumtab_enum_name3.at(3856) = std::string{"MISA"};
    vlSelf->__Venumtab_enum_name3.at(3857) = std::string{"MVENDORID"};
    vlSelf->__Venumtab_enum_name3.at(3858) = std::string{"MARCHID"};
    vlSelf->__Venumtab_enum_name3.at(3859) = std::string{"MIMPID"};
    vlSelf->__Venumtab_enum_name3.at(3860) = std::string{"MHARTID"};
    vlSelf->__Venumtab_enum_name3.at(3968) = std::string{"MCYCLEH"};
    vlSelf->__Venumtab_enum_name3.at(3969) = std::string{"MTIMEH"};
    vlSelf->__Venumtab_enum_name3.at(3970) = std::string{"MINSTRETH"};
}
