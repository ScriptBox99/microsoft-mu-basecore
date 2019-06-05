/** @file
  IA-32/x64 AsmReadIdtr()

  Copyright (c) 2006 - 2008, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include <Library/BaseLib.h>
#include <Library/DebugLib.h>

/**
  Reads the current Interrupt Descriptor Table Register(IDTR) descriptor.

  Reads and returns the current IDTR descriptor and returns it in Idtr. This
  function is only available on IA-32 and x64.

  If Idtr is NULL, then ASSERT().

  @param  Idtr  The pointer to a IDTR descriptor.

**/
VOID
EFIAPI
AsmReadIdtr (
  OUT     IA32_DESCRIPTOR           *Idtr
  )
{
  ASSERT (FALSE);
}

/**
  Writes the current Interrupt Descriptor Table Register(IDTR) descriptor.

  Writes the current IDTR descriptor and returns it in Idtr. This function is
  only available on IA-32 and x64.

  If Idtr is NULL, then ASSERT().

  @param  Idtr  The pointer to a IDTR descriptor.

**/
VOID
EFIAPI
AsmWriteIdtr (
  IN      CONST IA32_DESCRIPTOR     *Idtr
  )
{
  ASSERT (FALSE);
}
