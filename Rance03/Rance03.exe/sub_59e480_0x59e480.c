// 函数: sub_59e480
// 地址: 0x59e480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* result = arg1
void* result_1 = result
void* i = *(result + 4)

if (i != *(result + 8))
    int32_t ebx_1 = data_75dd6c
    int32_t* edi_1 = arg2
    
    do
        void* eax = *(i + 4)
        int32_t eax_1
        
        if (eax != 0)
            eax_1 = *(eax + 4)
        else
            eax_1 = 0xffffffff
        
        int32_t ecx = *(arg3 + 0x58)
        int32_t edx_1 = eax_1 * 9
        *edi_1 = *(ecx + (edx_1 << 2))
        edi_1[1] = *(ecx + (edx_1 << 2) + 4)
        edi_1[2] = *(ecx + (edx_1 << 2) + 8)
        void* eax_5 = *(i + 4)
        int32_t eax_6
        
        if (eax_5 != 0)
            eax_6 = *(eax_5 + 8)
        else
            eax_6 = 0xffffffff
        
        int32_t edx_2 = eax_6 * 3
        int32_t ecx_1 = *(arg3 + 0x64)
        edi_1[3] = *(ecx_1 + (edx_2 << 3))
        edi_1[4] = *(ecx_1 + (edx_2 << 3) + 4)
        edi_1[5] = *(ecx_1 + (edx_2 << 3) + 8)
        
        if (arg5 == 0)
            edi_1[6] = 0
            edi_1[7] = 0
            edi_1[8] = 0
        else
            void* eax_10 = *(i + 4)
            int32_t eax_11
            
            if (eax_10 != 0)
                eax_11 = *(eax_10 + 4)
            else
                eax_11 = 0xffffffff
            
            ecx_1 = *(arg3 + 0x90)
            int32_t edx_3 = eax_11 * 3
            edi_1[6] = *(ecx_1 + (edx_3 << 2))
            edi_1[7] = *(ecx_1 + (edx_3 << 2) + 4)
            edi_1[8] = *(ecx_1 + (edx_3 << 2) + 8)
        
        void* eax_15 = *(i + 4)
        
        if (eax_15 != 0)
            arg2 = *(eax_15 + 0x1c)
        else
            arg2 = eax_15
        
        ecx_1.b = arg6
        edi_1[9] = arg2
        
        if (ecx_1.b == 0)
            edi_1[0xa] = 0xffffffff
        else
            void* eax_17 = *(i + 4)
            
            if (eax_17 != 0)
                eax_17.b = *(eax_17 + 0x38)
                edi_1[0xa] = zx.d(eax_17.b) << 0x18
            else
                edi_1[0xa] = 0
        
        void* eax_20 = *(i + 4)
        int32_t xmm0_2
        
        if (eax_20 != 0)
            xmm0_2 = *(eax_20 + 0x20)
        else
            xmm0_2 = (zx.o(0)).d
        
        edi_1[0xb] = xmm0_2
        void* eax_21 = *(i + 4)
        int32_t xmm0_3
        
        if (eax_21 != 0)
            xmm0_3 = *(eax_21 + 0x24)
        else
            xmm0_3 = (zx.o(0)).d
        
        edi_1[0xc] = xmm0_3
        
        if (arg4 == 0)
            edi_1[0xd] = 0
            edi_1[0xe] = 0
        else
            void* eax_22 = *(i + 4)
            int32_t xmm0_4
            
            if (eax_22 != 0)
                xmm0_4 = *(eax_22 + 0x28)
            else
                xmm0_4 = (zx.o(0)).d
            
            edi_1[0xd] = xmm0_4
            void* eax_23 = *(i + 4)
            
            if (eax_23 != 0)
                edi_1[0xe] = *(eax_23 + 0x2c)
            else
                edi_1[0xe] = 0
        
        if (ecx_1.b == 0)
            edi_1[0xf] = 0
            edi_1[0x10] = 0
        else
            void* eax_24 = *(i + 4)
            int32_t* eax_25
            
            if (eax_24 != 0)
                eax_25 = eax_24 + 0x30
            else
                if ((ebx_1.b & 1) == 0)
                    ebx_1 |= 1
                    data_75dd64 = eax_24
                    data_75dd6c = ebx_1
                    data_75dd68 = eax_24
                
                eax_25 = &data_75dd64
            
            edi_1[0xf] = *eax_25
            void* eax_27 = *(i + 4)
            
            if (eax_27 != 0)
                edi_1[0x10] = *(eax_27 + 0x34)
            else
                if ((ebx_1.b & 1) == 0)
                    ebx_1 |= 1
                    data_75dd64 = eax_27
                    data_75dd6c = ebx_1
                    data_75dd68 = eax_27
                
                edi_1[0x10] = data_75dd68
        
        arg2 = &edi_1[0x11]
        
        if (arg7 == 0)
            edi_1[0x11] = 0
            edi_1[0x12] = 0x3f800000
            edi_1[0x13] = 0
            edi_1[0x14] = 0
            edi_1[0x15] = 0
            edi_1 = &edi_1[0x16]
        else
            void* eax_31 = *(i + 4)
            int32_t eax_32
            
            if (eax_31 != 0)
                eax_32 = *(eax_31 + 4)
            else
                eax_32 = 0xffffffff
            
            sub_59e700(&arg2, i + 8, *(arg3 + 0x58) + eax_32 * 0x24 + 0x18)
            edi_1 = arg2
        
        result = result_1
        i += 0x14
    while (i != *(result + 8))

return result
