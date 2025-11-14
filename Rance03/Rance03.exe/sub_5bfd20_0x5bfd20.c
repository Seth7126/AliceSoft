// 函数: sub_5bfd20
// 地址: 0x5bfd20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c99b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IVM::sys43vm::CJaffaVM::VTable** var_14 = arg1
*arg1 = &sys43vm::CJaffaVM::`vftable'{for `IVM'}
int32_t var_4 = 3
sub_5b3980(&arg1[0x49e])
int32_t** eax_3 = arg1[0x49c]
void var_10
sub_5cff10(&arg1[0x49c], &var_10, *eax_3, eax_3)
j__free(arg1[0x49c])
int32_t** eax_4 = arg1[0x49a]
sub_4200d0(&arg1[0x49a], &var_10, *eax_4, eax_4)
j__free(arg1[0x49a])
arg1[0x394] = &sys43vm::CIntStack::`vftable'
arg1[0x292] = &sys43vm::CIntStack::`vftable'
arg1[0x190] = &sys43vm::CIntStack::`vftable'
arg1[0x8e] = &sys43vm::CIntStack::`vftable'
arg1[0x88] = &sys43vm::CVMStack::`vftable'
int32_t lpMem = arg1[0x8a]
arg1[0x89] = &memory::CFastIntVector::`vftable'

if (lpMem != 0)
    HeapFree(data_75dc34, HEAP_NONE, lpMem)

sub_5daaa0(&arg1[0x78])
int32_t* ecx_4 = arg1[0x77]
arg1[0x72] = &sys43vm::CJaffaVMDebug::`vftable'

if (ecx_4 != 0)
    (*(*ecx_4 + 0x2c))(1)

int32_t* ecx_5 = arg1[0x76]

if (ecx_5 != 0)
    (*(*ecx_5 + 0x10))(1)

int32_t* ecx_6 = arg1[0x75]

if (ecx_6 != 0)
    (*(*ecx_6 + 0x48))(1)

arg1[0x6c] = &sys43vm::CVMSetTraceCallBack::`vftable'{for `IVMSetTraceCallback'}
arg1[0x6d] = &sys43vm::CVMTraceCallbackDummy::`vftable'{for `IVMTraceCallback'}
var_4.b = 1
sub_5d5c70(&arg1[0x5b])
sub_5bd4e0(&arg1[0x12])
int32_t var_4_1 = 0xffffffff
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_5d1140(&arg1[0xc])
fsbase->NtTib.ExceptionList = ExceptionList
return result
