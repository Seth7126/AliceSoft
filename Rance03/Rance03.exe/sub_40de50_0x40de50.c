// 函数: sub_40de50
// 地址: 0x40de50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_40ddd0(arg1)

if (&arg1[9] != arg2)
    sub_401ff0(&arg1[9], arg2, 0, 0xffffffff)

int32_t* result

if (arg3 == 0)
    result.b = 0
    return result

int32_t* ebp = arg3[4]

if (arg3[5] == 0 || ebp == 0)
    result.b = 0
    return result

int32_t* eax_1 = (*(*ebp + 0x2c))()
int32_t esi = 0

if (eax_1 s> 0)
    do
        int32_t* eax_2 = (*(*ebp + 0x30))(esi)
        
        if (sub_40e050(arg1, eax_2, arg3) != 0)
            *arg1 = 1
            return 1
        
        if (sub_40e220(arg1, eax_2, arg3) != 0)
            *arg1 = 3
            return 1
        
        esi += 1
    while (esi s< eax_1)

if (sub_40df30(arg1, arg3) == 0)
    return 0

*arg1 = 0
return 1
