// 函数: sub_630740
// 地址: 0x630740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char var_30c
int32_t eax_1 = __security_cookie ^ &var_30c
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((eax_2.b & 2) != 0)
    sub_62a740(arg3, "duplicate")
    noreturn

if ((eax_2.b & 4) != 0)
    sub_62fcc0(arg3, arg4)
    int32_t* eax_3 = sub_62a7c0(arg3, "out of place")
    sub_69a5bc(eax_1 ^ &var_30c)
    return eax_3

bool cond:0 = (arg3[0x157] & 2) != 0
*(arg3 + 0x74) = eax_2 | 2

if (not(cond:0))
    sub_62fcc0(arg3, arg4)
    int32_t* eax_5 = sub_62a7c0(arg3, "ignored in grayscale PNG")
    sub_69a5bc(eax_1 ^ &var_30c)
    return eax_5

uint32_t edx_3

if (arg4 u<= 0x300)
    edx_3 = arg4 u/ 3

int32_t* eax_14

if (arg4 u> 0x300 || arg4 != edx_3 * 3)
    sub_62fcc0(arg3, arg4)
    
    if (arg3[0x157] == 3)
        sub_62a740(arg3, "invalid")
        noreturn
    
    eax_14 = sub_62a7c0(arg3, "invalid")
else
    uint32_t i_2 = arg4 s/ 3
    uint32_t i_4 = i_2
    
    if (i_2 s> 0)
        void var_302
        void* edi_1 = &var_302
        uint32_t i_1 = i_2
        uint32_t i
        
        do
            sub_62fc80(i_2, &var_30c, arg3, 3)
            edi_1 += 3
            *(edi_1 - 5) = var_30c
            char var_30b
            *(edi_1 - 4) = var_30b
            char i_3
            i_2 = zx.d(i_3)
            *(edi_1 - 3) = i_2.b
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_62fcc0(arg3, nullptr)
    void var_304
    eax_14 = sub_6344c0(&var_304, arg2, arg3, &var_304, i_4)
    
    if (*(arg3 + 0x150) u> 0)
    label_630888:
        *(arg3 + 0x150) = 0
        
        if (arg2 != 0)
            *(arg2 + 0x16) = 0
        
        eax_14 = sub_62a7c0(arg3, "tRNS must be after")
        goto label_6308a3
    
    if (arg2 != 0)
        if ((*(arg2 + 8) & 0x10) != 0)
            goto label_630888
        
    label_6308a3:
        
        if (arg2 != 0)
            char ebx_1 = (*(arg2 + 8)).b
            
            if ((ebx_1 & 0x40) != 0)
                eax_14 = sub_62a7c0(arg3, "hIST must be after")
            
            if ((ebx_1 & 0x20) != 0)
                eax_14 = sub_62a7c0(arg3, "bKGD must be after")

sub_69a5bc(eax_1 ^ &var_30c)
return eax_14
