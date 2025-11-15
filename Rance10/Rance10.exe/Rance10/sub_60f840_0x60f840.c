// 函数: sub_60f840
// 地址: 0x60f840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74344e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = 1
*arg1 = &sys43vm::CJaffaVM::`vftable'{for `common::SuicideRefCounter<class IVM>'}
arg1[2] = 0
arg1[3] = &sys43vm::CErrorMsgBox::`vftable'{for `IErrorMsgBox'}
arg1[4] = arg1
__builtin_memset(&arg1[5], 0, 0x14)
int64_t* eax_3 = sub_6e810c(8)
int64_t* var_18 = eax_3
*eax_3 = 0
*(eax_3 + 4) = 1
*eax_3 = &savedata::CSaveData::`vftable'{for `common::SuicideRefCounter<class ISaveData>'}
arg1[0xa] = &sys43vm::CMemoryFileCompress::`vftable'
arg1[0xb] = eax_3
arg1[0xc].w = 0x101
arg1[0xd] = &sys43vm::CZlibDecompressor::`vftable'
arg1[0xe] = 0
arg1[0xf] = &sys43vm::CZlibCompressor::`vftable'
arg1[0x10] = 0
int32_t var_8_1 = 0
sub_609a20(&arg1[0x11])
var_8_1.b = 1
sub_620b80(&arg1[0x52])
arg1[0x5d] = &sys43vm::CVMSetTraceCallBack::`vftable'{for `IVMSetTraceCallback'}
arg1[0x5e] = &sys43vm::CVMTraceCallbackDummy::`vftable'{for `IVMTraceCallback'}
arg1[0x60] = 0
arg1[0x5f] = &arg1[0x5e]
arg1[0x61] = &sys43vm::CVMGameMsg::`vftable'{for `IVMGameMsg'}
arg1[0x62] = 0
arg1[0x63] = &sys43vm::CJaffaVMDebug::`vftable'
arg1[0x64] = &sys43vm::CVMDebugPage::`vftable'{for `IVMDebugPage'}
arg1[0x65] = &arg1[0x52]
arg1[0x66] = &sys43vm::CVMDebug::`vftable'{for `IVMDebug'}
arg1[0x67] = arg1
arg1[0x68] = &sys43vm::CVMDebugAinFile::`vftable'{for `IVMDebugAinFile'}
arg1[0x69] = arg1
var_8_1.b = 5
sub_6244b0(&arg1[0x6a], &arg1[0xa])
__builtin_memset(&arg1[0x74], 0, 0x19)
arg1[0x7b] = 0
arg1[0x7c].w = 1
HANDLE hHeap = data_7fcbf0
arg1[0x7d] = &memory::CFastIntVector::`vftable'
arg1[0x7e] = 0
arg1[0x7f] = 0
arg1[0x80] = 0x4000
arg1[0x7e] = HeapAlloc(hHeap, HEAP_NONE, 0x10000)
arg1[0x81] = &sys43vm::CIntStack::`vftable'
_memset(&arg1[0x82], 0, 0x400)
arg1[0x182] = &arg1[0x82]
_memset(&arg1[0x82], 0, 0x400)
arg1[0x183] = &sys43vm::CIntStack::`vftable'
_memset(&arg1[0x184], 0, 0x400)
arg1[0x284] = &arg1[0x184]
_memset(&arg1[0x184], 0, 0x400)
arg1[0x285] = &sys43vm::CIntStack::`vftable'
_memset(&arg1[0x286], 0, 0x400)
arg1[0x386] = &arg1[0x286]
_memset(&arg1[0x286], 0, 0x400)
arg1[0x387] = &sys43vm::CIntStack::`vftable'
_memset(&arg1[0x388], 0, 0x400)
arg1[0x488] = &arg1[0x388]
_memset(&arg1[0x388], 0, 0x400)
var_8_1.b = 0xc
arg1[0x489] = 0
var_18 = &arg1[0x48b]
arg1[0x48a] = 0
var_18 = nullptr
sub_61b410(&arg1[0x48b], &var_18)
var_8_1.b = 0xd
var_18 = &arg1[0x493]
arg1[0x493] = 0
arg1[0x494] = 0
arg1[0x493] = sub_461920()
_memset(&arg1[0x496], 0, 0x38)
sub_610020(&arg1[0x496])
data_7fcbb0 = &arg1[0x52]
data_7fcbb4 = &arg1[0x52]
arg1[0x4a4].w = 0
arg1[0x284]->vFunc_0 = 0xffffffff
arg1[0x284] = &arg1[0x284]->vFunc_1
arg1[0x52] = arg1
arg1[0x62] = &arg1[0x11]
arg1[0x60] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
