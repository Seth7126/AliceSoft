// 函数: sub_63d8b0
// 地址: 0x63d8b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    return 

if (*arg1 != 0)
    int32_t i = 0
    
    if (arg1[2] s> 0)
        do
            int32_t eax_2 = *(*arg1 + (i << 2))
            
            if (eax_2 != 0)
                _free(eax_2)
            
            i += 1
        while (i s< arg1[2])
    
    _free(*arg1)

int32_t eax_3 = arg1[1]

if (eax_3 != 0)
    _free(eax_3)

int32_t eax = arg1[3]

if (eax != 0)
    _free(eax)

*arg1 = zx.o(0)
