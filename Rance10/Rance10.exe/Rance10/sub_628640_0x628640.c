// 函数: sub_628640
// 地址: 0x628640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 4)

if (arg2 u< (*(esi + 0x94) - *(esi + 0x90)) s/ 0x38)
    void* edi_1 = *(esi + 0x90) + arg2 * 0x38
    
    if (edi_1 != 0 && arg3 s>= 0 && arg3 s< (*(edi_1 + 0x30) - *(edi_1 + 0x2c)) s/ 0x70)
        int32_t* result = arg3 * 0x70 + *(edi_1 + 0x2c)
        
        if (result[5] u< 0x10)
            return result
        
        return *result

return nullptr
