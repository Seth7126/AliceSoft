// 函数: sub_5d61e0
// 地址: 0x5d61e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg2 + 0x30)
int32_t esi_1 = esi - 1
int32_t result

if (esi - 1 s>= 0)
    void* ebx_1 = arg2
    int32_t temp2_1
    
    do
        uint32_t ecx_1 = *(arg2 + 0xc) u>> 2
        
        if (esi_1 u< ecx_1)
            int32_t eax
            
            if (*(arg2 + 0xc) != 0)
                eax = *(arg2 + 8)
            else
                eax = 0
            
            ebx_1 = *(eax + (esi_1 << 2))
        
        switch (*(*(arg2 + 0x2c) + (esi_1 << 2)) - 0x12)
            case 0, 1, 2, 3, 4, 5, 6, 7, 0xd, 0xe, 0x21, 0x22
                if (ebx_1 != 0xffffffff)
                    if (esi_1 u< ecx_1)
                        if (*(arg2 + 0xc) != 0)
                            result = *(arg2 + 8)
                        else
                            result = 0
                        
                        *(result + (esi_1 << 2)) = 0xffffffff
                    
                    if (ebx_1 s>= 0 && ebx_1 s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
                        result = *(*(arg1 + 8) + (ebx_1 << 2))
                        
                        if (result != 0)
                            if (*(result + 0x18) != 1)
                                *(result + 0x18) -= 1
                            else
                                sub_5d5e80(arg1, ebx_1)
        
        temp2_1 = esi_1
        esi_1 -= 1
    while (temp2_1 - 1 s>= 0)

result.b = 1
return result
