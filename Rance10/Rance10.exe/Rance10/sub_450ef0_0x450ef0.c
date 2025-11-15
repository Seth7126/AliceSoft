// 函数: sub_450ef0
// 地址: 0x450ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x120)
int32_t result

if (esi != 0)
    void* edi_1 = *(arg2 + 0x120)
    
    if (edi_1 != 0 && *(esi + 8) == *(edi_1 + 8))
        result.b = *(esi + 0x10)
        
        if (result.b == *(edi_1 + 0x10) && *(arg1 + 0x10c) == *(arg2 + 0x10c)
                && *(arg1 + 0x110) == *(arg2 + 0x110) && *(arg1 + 0xe4) == *(arg2 + 0xe4)
                && *(arg1 + 0xe8) == *(arg2 + 0xe8) && *(arg1 + 0xec) == *(arg2 + 0xec)
                && *(arg1 + 0xf0) == *(arg2 + 0xf0) && *(arg1 + 0xf4) == *(arg2 + 0xf4)
                && *(arg1 + 0xf8) == *(arg2 + 0xf8) && *(arg1 + 0xfc) == *(arg2 + 0xfc)
                && *(arg1 + 0x100) == *(arg2 + 0x100) && *(arg1 + 0x10) == *(arg2 + 0x10)
                && *(arg1 + 0xc) == *(arg2 + 0xc) && *(arg1 + 0x14) == *(arg2 + 0x14))
            result.b = *(arg1 + 0x114)
            
            if (result.b == *(arg2 + 0x114))
                result.b = *(arg1 + 0x19)
                
                if (result.b == *(arg2 + 0x19) && *(arg1 + 0x24) == *(arg2 + 0x24)
                        && *(arg1 + 0x28) == *(arg2 + 0x28) && *(arg1 + 0x30) == *(arg2 + 0x30)
                        && *(arg1 + 0x34) == *(arg2 + 0x34))
                    result.b = 1
                    return result

result.b = 0
return result
