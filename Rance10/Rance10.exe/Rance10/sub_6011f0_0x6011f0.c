// 函数: sub_6011f0
// 地址: 0x6011f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[0x16] = arg3
char* edx = *(arg2 + 4)

if (&edx[4] u<= *(arg2 + 8))
    *arg1 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) += 4
    
    if (sub_61ed80(arg2, &arg1[7]).b != 0 && sub_5ffa20(&arg1[0xd], arg2).b != 0
            && sub_61ec90(arg2, &arg1[0x13]).b != 0)
        if (sub_61ec90(arg2, &arg1[0x14]) != 0 && sub_61ec90(arg2, &arg3) != 0)
            arg1[0x15].b = arg3 != 0
            
            if (sub_61ec90(arg2, &arg1[0x17]) != 0)
                return sub_626570(&arg1[0x18], arg2, arg1[0x14]) != 0
        
        return false

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 0
return result
