// 函数: sub_5cd0b0
// 地址: 0x5cd0b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int16_t result = (***(arg1 + 0x14))()

if (result.b == 0)
    *(arg1 + 0x218) = 2
    return result

int32_t* ecx_2 = *(arg1 + 0x2c)

if (ecx_2 != 0)
    result = (**ecx_2)()
    
    if (result.b != 0)
        void* edi_1 = data_75d4e0
        
        if (sub_46cb80(edi_1).b == 0)
            result.b = 0
        else if ((***(edi_1 + 0x1c))().b == 0)
            result.b = 0
        else if ((0x8000 & GetKeyState(0xba)) == 0)
            result.b = 0
        else
            void* ebx_1 = data_75d4e0
            
            if (sub_46cb80(ebx_1).b == 0)
                result.b = 0
            else if ((***(ebx_1 + 0x1c))().b == 0)
                result.b = 0
            else if ((0x8000 & GetKeyState(0xbb)) == 0)
                result.b = 0
            else
                result.b = 1
        
        char ecx_4 = *(arg1 + 0x12b8)
        
        if (ecx_4 != 0)
        label_5cd173:
            
            if (*(arg1 + 0x12b9) != 0 && result.b == 0)
                return sub_5c2d60(arg1)
        else
            if (result.b != 0)
                return sub_5c2d00(arg1, 1)
            
            if (ecx_4 != 0)
                goto label_5cd173

return result
