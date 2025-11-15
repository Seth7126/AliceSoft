// 函数: sub_618250
// 地址: 0x618250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcbb8
int16_t result = (***(esi + 0x14))()

if (result.b != 0)
    int32_t* ecx_1 = *(esi + 0x24)
    
    if (ecx_1 != 0)
        result = (**ecx_1)()
        
        if (result.b != 0)
            void* edi_1 = data_7fcb64
            
            if (sub_47d5a0(edi_1).b == 0)
                result.b = 0
            else if ((***(edi_1 + 0x1c))().b == 0)
                result.b = 0
            else if ((0x8000 & GetKeyState(0xba)) == 0)
                result.b = 0
            else if (sub_47ee90(0xbb).b == 0)
                result.b = 0
            else
                result.b = 1
            
            char ecx_3 = *(esi + 0x1290)
            
            if (ecx_3 != 0)
            label_6182ea:
                
                if (*(esi + 0x1291) != 0 && result.b == 0)
                    return sub_612c90(esi) __tailcall
            else
                if (result.b != 0)
                    return sub_612c30(esi, 1)
                
                if (ecx_3 != 0)
                    goto label_6182ea
else
    *(esi + 0x1ec) = 2

return result
