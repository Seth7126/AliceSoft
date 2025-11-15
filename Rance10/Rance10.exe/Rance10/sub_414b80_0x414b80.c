// 函数: sub_414b80
// 地址: 0x414b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_414b00(arg1)

if (&arg1[0xb] != arg2)
    sub_403590(&arg1[0xb], arg2, 0, 0xffffffff)

int32_t* result

if (arg3 == 0)
    result.b = 0
    return result

int32_t* ebp = arg3[4]

if (arg3[5] == 0 || ebp == 0)
    result.b = 0
    return result

int32_t* eax_1 = (*(*ebp + 0x28))()
int32_t esi = 0

if (eax_1 s> 0)
    do
        int32_t* eax_2 = (*(*ebp + 0x2c))(esi)
        
        if (sub_414ce0(arg1, eax_2, arg3) != 0)
            *arg1 = 1
            return 1
        
        if (sub_414d70(arg1, eax_2, arg3) != 0)
            *arg1 = 3
            return 1
        
        esi += 1
    while (esi s< eax_1)

if (sub_414c60(arg1, arg3) == 0)
    return 0

*arg1 = 0
return 1
