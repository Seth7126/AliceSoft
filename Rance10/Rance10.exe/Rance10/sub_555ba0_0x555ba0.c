// 函数: sub_555ba0
// 地址: 0x555ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ac23
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CLLParts::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = 1
*arg1 = &partsengine::CLLParts::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
arg1[2] = arg2
_memset(&arg1[3], 0, 0x60)
char* (__fastcall* var_24)(int32_t* arg1) = sub_403320
int32_t var_8_1 = 0
`eh vector constructor iterator'(&arg1[3], 0x18, 4, sub_404d40)
void* i = &arg1[0x1f]
int32_t var_8_2 = 1
arg1[0x1b] = 1
arg1[0x1c].b = 1
arg1[0x1d] = 0
arg1[0x1e] = 0
*i = zx.o(0)
arg1[0x23] = arg4
arg1[0x24] = arg5
arg1[0x25] = arg6
arg1[0x26] = arg3

for (void* edi_1 = i + 0x10; i != edi_1; i += 4)
    struct common::SuicideRefCounter<class partsengine::CSprite>::partsengine::CCGSprite::VTable** 
        eax_8 = sub_6e810c(0xb0)
    arg2 = eax_8
    var_8_2.b = 2
    var_8_2.b = 1
    *i = sub_547660(eax_8)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
