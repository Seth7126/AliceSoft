// 函数: sub_598fe0
// 地址: 0x598fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = arg2
int32_t* esi = arg1
char* result_1 = result
int32_t* var_8 = esi

if (esi != result)
    int32_t* edi_1 = &esi[1]
    
    if (edi_1 != result)
        do
            void* ebx_1 = *edi_1
            int32_t* ebp_1 = edi_1
            
            if (sub_597ff0(ebx_1, *esi) == 0)
                void* esi_1 = &edi_1[-1]
                result = sub_597ff0(ebx_1, edi_1[-1])
                
                while (result.b != 0)
                    *ebp_1 = *esi_1
                    ebp_1 = esi_1
                    int32_t* var_1c_4 = *(esi_1 - 4)
                    esi_1 -= 4
                    result = sub_597ff0(ebx_1, var_1c_4)
                
                esi = var_8
                *ebp_1 = ebx_1
            else
                result = sub_6feca0(&esi[1], esi, edi_1 - esi)
                *esi = ebx_1
            
            edi_1 = &edi_1[1]
        while (edi_1 != result_1)

return result
