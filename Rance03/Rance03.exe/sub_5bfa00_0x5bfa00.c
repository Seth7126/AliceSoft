// 函数: sub_5bfa00
// 地址: 0x5bfa00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9962
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IVM::sys43vm::CJaffaVM::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IVM::sys43vm::CJaffaVM::VTable** var_10_1 = arg1
*arg1 = &sys43vm::CJaffaVM::`vftable'{for `IVM'}
arg1[1] = 1
arg1[2] = 0
arg1[3] = &sys43vm::CErrorMsgBox::`vftable'{for `IErrorMsgBox'}
__builtin_memset(&arg1[4], 0, 0x20)
arg1[0xc] = &sys43vm::CMemoryFileCompress::`vftable'
arg1[0xd].w = 0x101
arg1[0xe] = &sys43vm::CZlibDecompressor::`vftable'
arg1[0xf] = 0
arg1[0x10] = &sys43vm::CZlibCompressor::`vftable'
arg1[0x11] = 0
int32_t var_4 = 0
sub_5bd0a0(&arg1[0x12])
sub_5d5bd0(&arg1[0x5b])
arg1[0x6c] = &sys43vm::CVMSetTraceCallBack::`vftable'{for `IVMSetTraceCallback'}
arg1[0x6d] = &sys43vm::CVMTraceCallbackDummy::`vftable'{for `IVMTraceCallback'}
arg1[0x6f] = 0
arg1[0x6e] = &arg1[0x6d]
var_4.b = 3
arg1[0x70] = &sys43vm::CVMGameMsg::`vftable'{for `IVMGameMsg'}
arg1[0x71] = 0
sub_5d0870(&arg1[0x72])
var_4.b = 4
sub_5da9f0(&arg1[0x78], &arg1[0xc])
arg1[0x82] = 0
arg1[0x83] = 0
arg1[0x84] = 0
arg1[0x85].b = 0
arg1[0x86] = 0
arg1[0x87].w = 1
arg1[0x88] = &sys43vm::CVMStack::`vftable'
HANDLE hHeap = data_75dc34
arg1[0x89] = &memory::CFastIntVector::`vftable'
arg1[0x8a] = 0
arg1[0x8b] = 0x4000
arg1[0x8c] = 0x4000
int32_t eax_4 = HeapAlloc(hHeap, HEAP_NONE, 0x10000)
arg1[0x8a] = eax_4
arg1[0x8d] = eax_4
arg1[0x8e] = &sys43vm::CIntStack::`vftable'
arg1[0x18f] = &arg1[0x8f]
_memset(&arg1[0x8f], 0, 0x400)
arg1[0x190] = &sys43vm::CIntStack::`vftable'
arg1[0x291] = &arg1[0x191]
_memset(&arg1[0x191], 0, 0x400)
arg1[0x292] = &sys43vm::CIntStack::`vftable'
arg1[0x393] = &arg1[0x293]
_memset(&arg1[0x293], 0, 0x400)
arg1[0x394] = &sys43vm::CIntStack::`vftable'
arg1[0x495] = &arg1[0x395]
_memset(&arg1[0x395], 0, 0x400)
var_4.b = 0xa
arg1[0x496] = 0
arg1[0x497] = 0
arg1[0x498] = 0
arg1[0x499] = 0xffffffff
arg1[0x49a] = 0
arg1[0x49b] = 0
arg1[0x49a] = sub_4a6eb0()
var_4.b = 0xb
arg1[0x49c] = 0
arg1[0x49d] = 0
arg1[0x49c] = sub_458460()
sub_5b38a0(&arg1[0x49e])
arg1[0x4ae].w = 0
arg1[0x291]->vFunc_0 = 0xffffffff
arg1[0x291] = &arg1[0x291]->vFunc_1
arg1[4] = arg1
arg1[0x5c] = arg1
arg1[0x71] = &arg1[0x12]
arg1[0x6f] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
