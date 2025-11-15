// 函数: sub_523300
// 地址: 0x523300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg1 = &partsengine::CMovieSprite::`vftable'{for `common::SuicideRefCounter<class partsengine::CSprite>'}
sub_5238f0(arg1)
int32_t eax_3 = arg1[0x24]
void* esi = &arg1[0x1f]

if (eax_3 u>= 0x10)
    sub_403160(*esi, eax_3 + 1, 1)

*(esi + 0x14) = 0xf
bool cond:0 = *(esi + 0x14) u< 0x10
*(esi + 0x10) = 0

if (not(cond:0))
    esi = *esi

*esi = 0
Concurrency::details::AllocatorBucket::~AllocatorBucket(&arg1[4])

if ((arg2 & 1) != 0)
    int32_t var_20_1 = 0xb0
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
