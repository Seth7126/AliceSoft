// 函数: sub_576980
// 地址: 0x576980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg2
int32_t* edi = arg1
void* result_1 = result
int32_t* var_c = edi

if (edi != result && &edi[1] != result)
    void* eax = 4 - edi
    void* esi_1 = edi
    
    do
        void* ebx_1 = *(esi_1 + 4)
        void* eax_1 = esi_1 + 4
        void* ebp_1 = eax_1
        
        if (sub_58d3c0(ebx_1, *edi) == 0)
            void* edi_1 = *esi_1
            
            if (sub_58d3c0(ebx_1, edi_1) != 0)
                char i
                
                do
                    *ebp_1 = edi_1
                    edi_1 = *(esi_1 - 4)
                    ebp_1 = esi_1
                    esi_1 -= 4
                    i = sub_58d3c0(ebx_1, edi_1)
                while (i != 0)
            
            edi = var_c
            *ebp_1 = ebx_1
        else
            sub_6feca0(&edi[1], edi, eax + esi_1)
            *edi = ebx_1
        
        esi_1 = eax_1
        result = esi_1 + 4
    while (result != result_1)

return result
