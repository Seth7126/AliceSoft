// 函数: sub_5d4520
// 地址: 0x5d4520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = arg1
void* var_4 = edx
int32_t var_8 = 0
int32_t eax

if (arg2 s> 0)
    int32_t ecx_9
    
    do
        void* ebp_1 = *(edx + 0x1c)
        int32_t edi_6
        
        if (*(ebp_1 + 0x3c) != 0)
            edi_6 = *(*(ebp_1 + 0x38) + (*(ebp_1 + 0x3c) << 2) - 4)
            *(ebp_1 + 0x3c) -= 1
            
            if (*(*(ebp_1 + 8) + (edi_6 << 2)) != 0)
                sub_64b530(0x6ea8d8)
                edi_6 = 0xffffffff
        else
            int32_t eax_1 = *(ebp_1 + 0xc)
            int32_t var_c
            int32_t* ecx = &var_c
            var_c = 0
            
            if (&var_c u< eax_1)
                ecx = *(ebp_1 + 8)
            
            if (&var_c u>= eax_1 || ecx u> &var_c)
                if (eax_1 == *(ebp_1 + 0x10))
                    int32_t* var_20_2 = ecx
                    sub_412f20(ebp_1 + 8)
                
                int32_t* eax_4 = *(ebp_1 + 0xc)
                
                if (eax_4 != 0)
                    *eax_4 = 0
                
                *(ebp_1 + 0xc) += 4
                edi_6 = ((*(ebp_1 + 0xc) - *(ebp_1 + 8)) s>> 2) - 1
            else
                if (eax_1 == *(ebp_1 + 0x10))
                    int32_t* var_20_1 = ecx
                    sub_412f20(ebp_1 + 8)
                
                int32_t* ecx_2 = *(ebp_1 + 0xc)
                
                if (ecx_2 == 0)
                    *(ebp_1 + 0xc) += 4
                    edi_6 = ((*(ebp_1 + 0xc) - *(ebp_1 + 8)) s>> 2) - 1
                else
                    *ecx_2 = *(*(ebp_1 + 8) + ((&var_c - ecx) s>> 2 << 2))
                    *(ebp_1 + 0xc) += 4
                    edi_6 = ((*(ebp_1 + 0xc) - *(ebp_1 + 8)) s>> 2) - 1
        
        struct sys43vm::CPage::VTable** ebx_1
        
        if (*(ebp_1 + 0x24) != *(ebp_1 + 0x28))
            ebx_1 = *(*(ebp_1 + 0x28) - 4)
            *(ebp_1 + 0x28) -= 4
            
            if (sub_5d33c0(ebx_1, 2) == 0)
                if (ebx_1 != 0)
                    (*ebx_1)->vFunc_0(1)
                
                ebx_1 = nullptr
        else
            struct sys43vm::CPage::VTable** eax_8 = sub_69adc6(0x64)
            
            if (eax_8 == 0)
                ebx_1 = nullptr
            else
                ebx_1 = sub_5d3190(eax_8, 2, *(ebp_1 + 0x20))
        
        *(*(ebp_1 + 8) + (edi_6 << 2)) = ebx_1
        
        if (edi_6 s>= 0)
            edx = var_4
        
        if (edi_6 s< 0 || var_8 u>= *(edx + 0xc) u>> 2)
            uint32_t eax_14
            eax_14.b = 0
            return eax_14
        
        if (*(edx + 0xc) != 0)
            eax = *(edx + 8)
        else
            eax = 0
        
        *(eax + (var_8 << 2)) = edi_6
        ecx_9 = var_8 + 1
        var_8 = ecx_9
    while (ecx_9 s< arg2)

eax.b = 1
return eax
