// 函数: sub_5da360
// 地址: 0x5da360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca730
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sys43vm::CWriteFile::VTable* const var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg3
struct memory::CFastMemory::VTable* const var_44 = &memory::CFastMemory::`vftable'
int32_t* lpMem_1 = nullptr
void* var_3c = nullptr
int32_t var_38 = 0
int32_t var_4 = 0
sub_5da610(arg1, arg2, esi, &var_44, arg5)
var_64 = &sys43vm::CWriteFile::`vftable'
struct sys43vm::CMemoryFile::VTable* const var_60 = &sys43vm::CMemoryFile::`vftable'
struct memory::CFastMemory::VTable* const var_5c = &memory::CFastMemory::`vftable'
int32_t lpMem = 0
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_4c = 0
var_4.b = 1
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_402110(&var_2c, 0x6ea968, 3)
int32_t edx_1 = var_18
char* edi = &var_2c
char* ecx_2 = var_2c.d

if (edx_1 u>= 0x10)
    edi = ecx_2

void* eax_7

if (var_1c != 0xffffffff)
    eax_7 = sub_5de800(&var_64, edi, var_1c + 1)
    edx_1 = var_18
    ecx_2 = var_2c.d
else
    eax_7.b = 1

int32_t i
i.b = eax_7.b == 0

if (edx_1 u>= 0x10)
    j__free(ecx_2)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (i.b != 0)
labelid_8:
    i.b = 0
else if (sub_5de860(&var_64, 7) == 0)
labelid_8:
    i.b = 0
else
    void* eax_9 = esi[4]
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    char eax_11
    
    if (eax_9 != 0xffffffff)
        eax_11 = sub_5de800(&var_64, esi, eax_9 + 1)
    
    if (eax_9 != 0xffffffff && eax_11 == 0)
    labelid_8:
        i.b = 0
    else
        int32_t eax_12
        int32_t edx_2
        edx_2:eax_12 = muls.dp.d(0x2aaaaaab, arg4[1] - *arg4)
        int32_t edx_3 = edx_2 s>> 2
        
        if (sub_5de860(&var_64, (edx_3 u>> 0x1f) + edx_3) == 0)
        label_5da5b0:
            i.b = 0
        else
            int32_t esi_1 = *arg4
            i = 0
            int32_t eax_17
            int32_t edx_4
            edx_4:eax_17 = muls.dp.d(0x2aaaaaab, arg4[1] - esi_1)
            int32_t edx_5 = edx_4 s>> 2
            
            if ((edx_5 u>> 0x1f) + edx_5 s> 0)
                void* edi_1 = nullptr
                int32_t edx_7
                
                do
                    int32_t* eax_21 = edi_1 + esi_1
                    void* ecx_11 = eax_21[4]
                    
                    if (*(edi_1 + esi_1 + 0x14) u>= 0x10)
                        eax_21 = *eax_21
                    
                    if (ecx_11 != 0xffffffff && sub_5de800(&var_64, eax_21, ecx_11 + 1) == 0)
                        goto label_5da5b0_2
                    
                    esi_1 = *arg4
                    i += 1
                    edi_1 += 0x18
                    int32_t eax_23
                    int32_t edx_6
                    edx_6:eax_23 = muls.dp.d(0x2aaaaaab, arg4[1] - esi_1)
                    edx_7 = edx_6 s>> 2
                while (i s< (edx_7 u>> 0x1f) + edx_7)
            
            if (var_3c == 0)
            label_5da5a3:
                
                if (sub_5dab20(arg5, arg1, arg2, &var_64, 1) == 0)
                label_5da5b0_1:
                    i.b = 0
                else
                    i.b = 1
            else
                if (sub_5de800(&var_64, lpMem_1, var_3c) != 0)
                    goto label_5da5a3
                
            label_5da5b0_2:
                i.b = 0

if (lpMem != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem)

if (lpMem_1 != 0)
    HeapFree(data_75dc38, HEAP_NONE, lpMem_1)

int32_t* result
result.b = i.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
