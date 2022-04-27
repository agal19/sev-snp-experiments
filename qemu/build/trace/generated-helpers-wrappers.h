/* This file is autogenerated by tracetool, do not edit. */

#define tcg_temp_new_nop(v) (v)
#define tcg_temp_free_nop(v)

static inline void gen_helper_trace_guest_ld_before_exec(TCGv_env __tcg___cpu, TCGv vaddr, uint32_t memopidx)
{
    TCGv_env ____tcg___cpu = tcg_temp_new_nop(__tcg___cpu);
    TCGv __vaddr = tcg_temp_new_nop(vaddr);
    TCGv_i32 __memopidx = tcg_const_i32(memopidx);
    gen_helper_trace_guest_ld_before_exec_proxy(____tcg___cpu, __vaddr, __memopidx);
    tcg_temp_free_nop(____tcg___cpu);
    tcg_temp_free_nop(__vaddr);
    tcg_temp_free_i32(__memopidx);
}
static inline void gen_helper_trace_guest_st_before_exec(TCGv_env __tcg___cpu, TCGv vaddr, uint32_t memopidx)
{
    TCGv_env ____tcg___cpu = tcg_temp_new_nop(__tcg___cpu);
    TCGv __vaddr = tcg_temp_new_nop(vaddr);
    TCGv_i32 __memopidx = tcg_const_i32(memopidx);
    gen_helper_trace_guest_st_before_exec_proxy(____tcg___cpu, __vaddr, __memopidx);
    tcg_temp_free_nop(____tcg___cpu);
    tcg_temp_free_nop(__vaddr);
    tcg_temp_free_i32(__memopidx);
}
static inline void gen_helper_trace_guest_rmw_before_exec(TCGv_env __tcg___cpu, TCGv vaddr, uint32_t memopidx)
{
    TCGv_env ____tcg___cpu = tcg_temp_new_nop(__tcg___cpu);
    TCGv __vaddr = tcg_temp_new_nop(vaddr);
    TCGv_i32 __memopidx = tcg_const_i32(memopidx);
    gen_helper_trace_guest_rmw_before_exec_proxy(____tcg___cpu, __vaddr, __memopidx);
    tcg_temp_free_nop(____tcg___cpu);
    tcg_temp_free_nop(__vaddr);
    tcg_temp_free_i32(__memopidx);
}