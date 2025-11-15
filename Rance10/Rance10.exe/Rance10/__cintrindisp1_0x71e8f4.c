// 函数: __cintrindisp1
// 地址: 0x71e8f4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg3)
int16_t var_a8 = temp0

if (___acrt_has_user_matherr() != 0)
    double var_8a_1 = fconvert.d(arg4)

__trandisp1(arg1, arg2, ebp, arg4)
char var_2cc
char var_2cc_2 = (var_2cc | 1) & 0xfd
return cintrinexit(ebp, arg4)
