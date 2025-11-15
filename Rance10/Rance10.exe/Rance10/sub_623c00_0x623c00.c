// 函数: sub_623c00
// 地址: 0x623c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744a80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
struct memory::CFastMemory::VTable* const var_40 = &memory::CFastMemory::`vftable'
char* lpMem_2 = nullptr
void* var_38 = nullptr
int32_t var_34 = 0
int32_t var_8_1 = 0
int32_t var_5c
char eax_4 = sub_623e20(arg1, esi, &var_5c, &var_40, arg4)
int32_t ebx = var_5c
struct sys43vm::CWriteFile::VTable* const var_58 = &sys43vm::CWriteFile::`vftable'

if (eax_4 == 0)
    ebx = 7

struct memory::CFastMemory::VTable* const var_54 = &memory::CFastMemory::`vftable'
BOOL lpMem = 0
int32_t var_4c = 0
int32_t var_48 = 0
int32_t var_44 = 0
var_8_1.b = 1
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, "RSM", 3)
char* ecx_2 = &var_2c

if (var_18 u>= 0x10)
    ecx_2 = var_2c.d

bool cond:2 = sub_62ab00(&var_58, ecx_2, var_1c + 1) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

char* lpMem_1 = lpMem_2
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (cond:2 != 0)
    ebx.b = 0
else if (sub_62ab60(&var_58, ebx) == 0)
    ebx.b = 0
else
    void* eax_11 = esi[4]
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    if (sub_62ab00(&var_58, esi, eax_11 + 1) == 0)
        ebx.b = 0
    else
        int32_t eax_14
        int32_t edx_1
        edx_1:eax_14 = muls.dp.d(0x2aaaaaab, arg3[1] - *arg3)
        int32_t edx_2 = edx_1 s>> 2
        
        if (sub_62ab60(&var_58, (edx_2 u>> 0x1f) + edx_2) == 0)
        label_623dd2:
            lpMem_1 = lpMem_2
            ebx.b = 0
        else
            void* i = *arg3
            
            for (int32_t edi_1 = arg3[1]; i != edi_1; i += 0x18)
                void* i_1
                
                if (*(i + 0x14) u< 0x10)
                    i_1 = i
                else
                    i_1 = *i
                
                if (sub_62ab00(&var_58, i_1, *(i + 0x10) + 1) == 0)
                    goto label_623dd2
            
            lpMem_1 = lpMem_2
            
            if (var_38 == 0)
                ebx.b = sub_6245e0(arg4, arg1, &var_58, 1)
            else if (sub_62ab00(&var_58, lpMem_1, var_38) == 0)
                ebx.b = 0
            else
                ebx.b = sub_6245e0(arg4, arg1, &var_58, 1)

if (lpMem != 0)
    HeapFree(data_7fcbf4, HEAP_NONE, lpMem)

if (lpMem_1 != 0)
    HeapFree(data_7fcbf4, HEAP_NONE, lpMem_1)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
