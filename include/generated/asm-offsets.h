#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 */

#define pt_regs_bx 40 /* offsetof(struct pt_regs, bx) */
#define pt_regs_cx 88 /* offsetof(struct pt_regs, cx) */
#define pt_regs_dx 96 /* offsetof(struct pt_regs, dx) */
#define pt_regs_sp 152 /* offsetof(struct pt_regs, sp) */
#define pt_regs_bp 32 /* offsetof(struct pt_regs, bp) */
#define pt_regs_si 104 /* offsetof(struct pt_regs, si) */
#define pt_regs_di 112 /* offsetof(struct pt_regs, di) */
#define pt_regs_r8 72 /* offsetof(struct pt_regs, r8) */
#define pt_regs_r9 64 /* offsetof(struct pt_regs, r9) */
#define pt_regs_r10 56 /* offsetof(struct pt_regs, r10) */
#define pt_regs_r11 48 /* offsetof(struct pt_regs, r11) */
#define pt_regs_r12 24 /* offsetof(struct pt_regs, r12) */
#define pt_regs_r13 16 /* offsetof(struct pt_regs, r13) */
#define pt_regs_r14 8 /* offsetof(struct pt_regs, r14) */
#define pt_regs_r15 0 /* offsetof(struct pt_regs, r15) */
#define pt_regs_flags 144 /* offsetof(struct pt_regs, flags) */

#define saved_context_cr0 202 /* offsetof(struct saved_context, cr0) */
#define saved_context_cr2 210 /* offsetof(struct saved_context, cr2) */
#define saved_context_cr3 218 /* offsetof(struct saved_context, cr3) */
#define saved_context_cr4 226 /* offsetof(struct saved_context, cr4) */
#define saved_context_cr8 234 /* offsetof(struct saved_context, cr8) */
#define saved_context_gdt_desc 261 /* offsetof(struct saved_context, gdt_desc) */

#define TSS_ist 36 /* offsetof(struct tss_struct, x86_tss.ist) */
#define TSS_sp0 4 /* offsetof(struct tss_struct, x86_tss.sp0) */

#define __NR_syscall_max 325 /* sizeof(syscalls_64) - 1 */
#define NR_syscalls 326 /* sizeof(syscalls_64) */
#define __NR_syscall_compat_max 376 /* sizeof(syscalls_ia32) - 1 */
#define IA32_NR_syscalls 377 /* sizeof(syscalls_ia32) */

#define TI_flags 8 /* offsetof(struct thread_info, flags) */
#define TI_status 12 /* offsetof(struct thread_info, status) */
#define TI_addr_limit 24 /* offsetof(struct thread_info, addr_limit) */

#define crypto_tfm_ctx_offset 80 /* offsetof(struct crypto_tfm, __crt_ctx) */

#define pbe_address 0 /* offsetof(struct pbe, address) */
#define pbe_orig_address 8 /* offsetof(struct pbe, orig_address) */
#define pbe_next 16 /* offsetof(struct pbe, next) */

#define BP_scratch 484 /* offsetof(struct boot_params, scratch) */
#define BP_loadflags 529 /* offsetof(struct boot_params, hdr.loadflags) */
#define BP_hardware_subarch 572 /* offsetof(struct boot_params, hdr.hardware_subarch) */
#define BP_version 518 /* offsetof(struct boot_params, hdr.version) */
#define BP_kernel_alignment 560 /* offsetof(struct boot_params, hdr.kernel_alignment) */
#define BP_pref_address 600 /* offsetof(struct boot_params, hdr.pref_address) */
#define BP_code32_start 532 /* offsetof(struct boot_params, hdr.code32_start) */

#define PTREGS_SIZE 168 /* sizeof(struct pt_regs) */

#endif
