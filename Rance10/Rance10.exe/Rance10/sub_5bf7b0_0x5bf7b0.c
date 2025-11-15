// 函数: sub_5bf7b0
// 地址: 0x5bf7b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg7
void* ebx = arg8
int32_t ebp = eax * 2
int32_t* esi = arg3
int32_t* var_14

if (ebp s<= ebx)
    int32_t eax_1 = eax << 2
    int32_t var_20_1 = eax_1
    
    do
        void* edx = eax_1 + esi
        void* edi_1 = eax_1 + edx
        int32_t var_48_1 = 0
        int32_t var_44_1 = 0
        int32_t var_40_1 = 0
        int32_t var_3c_1 = arg6
        int32_t* eax_3 = sub_5c02e0(arg6, esi, &var_14, edx, edx, edi_1, 0)
        int32_t* esi_1 = var_14
        arg6 = eax_3[4]
        
        if (esi_1 != 0)
            int32_t var_c
            int32_t eax_5 = var_c
            
            if (esi_1 != eax_5)
                do
                    int32_t* edi_2 = *esi_1
                    
                    if (edi_2 != 0)
                        sub_5bd030(edi_2)
                        int32_t var_34_1 = 0x80
                        operator new(edi_2)
                        eax_5 = var_c
                    
                    esi_1 = &esi_1[1]
                while (esi_1 != eax_5)
                
                esi_1 = var_14
            
            _free(esi_1)
        
        eax_1 = var_20_1
        ebx -= ebp
        esi = edi_1
    while (ebx s>= ebp)
    
    eax = arg7

if (ebx s> eax)
    int32_t* edx_3 = &esi[eax]
    int32_t var_48_3 = 0
    int32_t var_44_2 = 0
    int32_t var_40_3 = 0
    int32_t var_3c_3 = arg6
    sub_5c02e0(arg6, esi, &var_14, edx_3, edx_3, arg2, 0)
else
    int32_t var_40_2 = 0
    int32_t var_3c_2 = 0
    int32_t var_38_2 = 0
    int32_t var_34_3 = arg6
    sub_5bf9e0(arg6, esi, &var_14, arg2, 0)

int32_t result = sub_5bed30(&var_14)
int32_t* esi_2 = arg4

if (esi_2 == 0)
    return result

int32_t eax_8 = arg5

if (esi_2 != eax_8)
    do
        int32_t* edi_3 = *esi_2
        
        if (edi_3 != 0)
            sub_5bd030(edi_3)
            int32_t var_34_4 = 0x80
            operator new(edi_3)
            eax_8 = arg5
        
        esi_2 = &esi_2[1]
    while (esi_2 != eax_8)
    
    esi_2 = arg4

return _free(esi_2)
