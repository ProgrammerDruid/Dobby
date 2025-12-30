.intel_syntax noprefix
.align 4

.globl closure_trampoline_asm

// tip: rip mean next instruction address
closure_trampoline_asm:
  push [rip + 6]
  jmp [rip + 8]

closure_tramp_entry_addr:
.quad 0

closure_bridge_addr:
.quad 0

.globl closure_trampoline_asm_end
closure_trampoline_asm_end: