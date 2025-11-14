// 函数: sub_691300
// 地址: 0x691300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp_1 = arg6
void* var_8 = arg3
void* esi_1

if (arg3 == arg2)
    esi_1 = arg4
else
    arg1 = arg4
    void* var_c_1 = arg1
    
    if (arg1 == arg5)
        esi_1 = arg1
    else
        void* esi = arg3 + 0xc
        void** edi_1 = arg1 + 0xc
        bool cond:1_1
        
        do
            void* ebx_1 = ebp_1
            ebp_1 += 0x44
            
            if (*(esi + 0x2c) f<= edi_1[0xb])
                arg1.b = *(esi - 8)
                *(ebx_1 + 4) = arg1.b
                *(ebx_1 + 8) = *(esi - 4)
                
                if (ebx_1 + 0xc != esi)
                    sub_401ff0(ebx_1 + 0xc, esi, 0, 0xffffffff)
                
                *(ebx_1 + 0x24) = *(esi + 0x18)
                sub_4a6db0(ebx_1 + 0x28, esi + 0x1c)
                *(ebx_1 + 0x34) = *(esi + 0x28)
                *(ebx_1 + 0x38) = *(esi + 0x2c)
                *(ebx_1 + 0x3c) = *(esi + 0x30)
                arg1 = *(esi + 0x34)
                esi += 0x44
                cond:1_1 = var_8 + 0x44 != arg2
                *(ebx_1 + 0x40) = arg1
                var_8 += 0x44
            else
                arg1.b = edi_1[-2].b
                *(ebx_1 + 4) = arg1.b
                *(ebx_1 + 8) = edi_1[-1]
                
                if (ebx_1 + 0xc != edi_1)
                    sub_401ff0(ebx_1 + 0xc, edi_1, 0, 0xffffffff)
                
                *(ebx_1 + 0x24) = edi_1[6]
                sub_4a6db0(ebx_1 + 0x28, &edi_1[7])
                *(ebx_1 + 0x34) = edi_1[0xa].b
                *(ebx_1 + 0x38) = edi_1[0xb]
                *(ebx_1 + 0x3c) = edi_1[0xc]
                int32_t eax_6 = edi_1[0xd]
                edi_1 = &edi_1[0x11]
                *(ebx_1 + 0x40) = eax_6
                arg1 = var_c_1 + 0x44
                cond:1_1 = arg1 != arg5
                var_c_1 = arg1
        while (cond:1_1)
        esi_1 = var_c_1

int32_t __saved_edi = arg2
void* eax_8 = sub_68cec0(arg1, arg2, var_8, ebp_1)
int32_t var_20_2 = arg2
return sub_68cec0(eax_8, arg5, esi_1, eax_8)
