// 函数: sub_5d6140
// 地址: 0x5d6140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0
uint32_t result

if (*(arg2 + 0x30) s> 0)
    void* ecx = arg2
    
    do
        if (i u< *(arg2 + 0xc) u>> 2)
            int32_t eax_2
            
            if (*(arg2 + 0xc) != 0)
                eax_2 = *(arg2 + 8)
            else
                eax_2 = 0
            
            ecx = *(eax_2 + (i << 2))
        
        switch (*(*(arg2 + 0x2c) + (i << 2)) - 0x12)
            case 0, 1, 2, 3, 4, 5, 6, 7, 0xd, 0xe, 0x21, 0x22
                if (ecx s>= 0 && ecx s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
                    result = *(*(arg1 + 8) + (ecx << 2))
                    
                    if (result != 0)
                        *(result + 0x18) += 1
        
        i += 1
    while (i s< *(arg2 + 0x30))

result.b = 1
return result
