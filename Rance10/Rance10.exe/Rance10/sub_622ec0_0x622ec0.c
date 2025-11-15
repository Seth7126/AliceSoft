// 函数: sub_622ec0
// 地址: 0x622ec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg4
struct sys43vm::CWriteFile::VTable* const var_44 = &sys43vm::CWriteFile::`vftable'
struct memory::CFastMemory::VTable* const var_40 = &memory::CFastMemory::`vftable'
BOOL lpMem_1 = 0
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_8_1 = 0
*(arg1 + 4) = 0
void* i_1 = nullptr
int32_t var_5c = 0
int32_t var_58 = 0
var_8_1.b = 1
sub_6239e0(arg2, esi, &i_1, arg5)
int32_t var_18 = 0xf
void* var_1c = nullptr
char var_2c = 0
sub_403490(&var_2c, "RSM", 3)
char* ecx_1 = &var_2c

if (var_18 u>= 0x10)
    ecx_1 = var_2c.d

int32_t ebx
ebx.b = sub_62ab00(&var_44, ecx_1, var_1c + 1) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

if (ebx.b != 0)
labelid_1a:
    ebx.b = 0
else if (sub_62ab60(&var_44, 0xe) == 0)
labelid_1a:
    ebx.b = 0
else
    void* eax_10 = esi[4]
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    if (sub_62ab00(&var_44, esi, eax_10 + 1) == 0)
    label_62315a:
        ebx.b = 0
    else
        void* i = i_1
        
        if (sub_62ab60(&var_44, (var_5c - i) s/ 0x18) == 0)
        label_62315a_1:
            ebx.b = 0
        else
            for (; i != var_5c; i += 0x18)
                void* i_2
                
                if (*(i + 0x14) u< 0x10)
                    i_2 = i
                else
                    i_2 = *i
                
                if (sub_62ab00(&var_44, i_2, *(i + 0x10) + 1) == 0)
                    goto label_62315a_2
            
            if (sub_623660(&var_44, arg3, *(arg3 + 0x1d0) - *(arg3 + 0x1d4)) == 0)
            label_62315a_2:
                ebx.b = 0
            else
                struct memory::CFastIntVector::VTable* const var_54 =
                    &memory::CFastIntVector::`vftable'
                char* lpMem = nullptr
                int32_t var_4c_1 = 0
                int32_t var_48_1 = 0
                var_8_1.b = 2
                
                if (&var_54 != arg3 + 0x1f4)
                    sub_405cd0(&var_54, *(arg3 + 0x1fc))
                    
                    if (var_4c_1 != 0)
                        sub_700660(lpMem, *(arg3 + 0x1f8), var_4c_1 << 2)
                
                if (sub_624060(&var_44, &var_54) == 0)
                    ebx.b = 0
                else if (sub_609740(arg3 + 0x60c, &var_44) == 0)
                    ebx.b = 0
                else if (sub_609740(arg3 + 0xa14, &var_44) == 0)
                    ebx.b = 0
                else if (sub_609740(arg3 + 0xe1c, &var_44) == 0)
                    ebx.b = 0
                else if (sub_623740(&var_44, arg3) == 0)
                    ebx.b = 0
                else if (sub_620f40(arg3 + 0x148, &var_44) == 0)
                    ebx.b = 0
                else
                    ebx.b = sub_6245e0(arg5, arg2, &var_44, 1)
                
                if (lpMem != 0)
                    HeapFree(data_7fcbf0, HEAP_NONE, lpMem)

sub_417070(&i_1)
var_44 = &sys43vm::CWriteFile::`vftable'
struct memory::CFastMemory::VTable* const var_40_1 = &memory::CFastMemory::`vftable'

if (lpMem_1 != 0)
    HeapFree(data_7fcbf4, HEAP_NONE, lpMem_1)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
