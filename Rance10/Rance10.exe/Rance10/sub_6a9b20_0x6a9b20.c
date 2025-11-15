// 函数: sub_6a9b20
// 地址: 0x6a9b20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_4 = arg1
void* edx = *(arg1 + 0x124)

if (edx == 0)
    sub_6a7500(arg1, "NULL row buffer")
    noreturn

if ((*(arg1 + 0x78) & 0x4040) == 0x4000)
    sub_6a7500(arg1, "Uninitialized row")
    noreturn

int32_t __saved_ebx_7 = *(arg1 + 0x7c)

if ((__saved_ebx_7 & 0x1000) != 0)
    if (arg2[2].b != 3)
        int32_t __saved_ebx_2
        
        if (*(arg1 + 0x150) == 0 || (__saved_ebx_7 & 0x2000000) == 0)
            __saved_ebx_2 = 0
        else
            __saved_ebx_7 = arg1 + 0x1b8
            __saved_ebx_2 = __saved_ebx_7
        
        sub_6ac630(__saved_ebx_7, edx + 1, arg2, __saved_ebx_2)
    else
        uint32_t eax_2 = zx.d(*(arg1 + 0x150))
        sub_6ac410(eax_2, edx + 1, arg2, *(arg1 + 0x144), *(arg1 + 0x1b4), eax_2)

char* eax_4 = *(arg1 + 0x7c) & 0x40080

if (eax_4 == 0x40000)
    eax_4.b = arg2[2].b
    
    if (eax_4.b == 6 || eax_4.b == 4)
        eax_4 = sub_6b2930(eax_4, *(arg1 + 0x124) + 1, arg2, 0)

if ((*(arg1 + 0x7c) & 0x600000) != 0)
    char* eax_6 = *(arg1 + 0x124) + 1
    eax_4 = sub_6aa990(eax_6, arg2, arg1, eax_6)
    
    if (eax_4 != 0)
        int32_t eax_8 = *(arg1 + 0x7c) & 0x600000
        *(arg1 + 0x260) = 1
        
        if (eax_8 == &__dos_header)
            sub_6a7530(arg1, "png_do_rgb_to_gray found nongray pixel")
        
        eax_4 = *(arg1 + 0x7c) & 0x600000
        
        if (eax_4 == 0x200000)
            sub_6a7500(arg1, "png_do_rgb_to_gray found nongray pixel")
            noreturn

if ((*(arg1 + 0x7c) & 0x4000) != 0 && (*(arg1 + 0x74) & 0x800) == 0)
    eax_4 = sub_6aa800(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x80) != 0)
    sub_6aadd0(eax_4, *(arg1 + 0x124) + 1, arg2, arg1)

uint32_t ecx_8 = *(arg1 + 0x7c)
int32_t eax_11 = ecx_8 & 0x602000

if (eax_11 == 0x2000)
    if (ecx_8.b s>= 0)
    label_6a9c83:
        
        if (*(arg1 + 0x157) != 3)
            sub_6abf10(eax_11, *(arg1 + 0x124) + 1, arg2, arg1)
    else if (*(arg1 + 0x150) == 0 && (*(arg1 + 0x157) & 4) == 0)
        goto label_6a9c83

char* eax_13 = *(arg1 + 0x7c) & 0x40080

if (eax_13 == 0x40080)
    eax_13.b = arg2[2].b
    
    if (eax_13.b == 6 || eax_13.b == 4)
        eax_13, ecx_8 = sub_6b2930(eax_13, *(arg1 + 0x124) + 1, arg2, 0)

if ((*(arg1 + 0x7c) & 0x800000) != 0 && (arg2[2].b & 4) != 0)
    sub_6ac330(eax_13, *(arg1 + 0x124) + 1, arg2, arg1)

if ((*(arg1 + 0x7c) & 0x4000000) != 0)
    sub_6aa340(arg2, *(arg1 + 0x124) + 1)

uint32_t eax_19 = *(arg1 + 0x7c)

if ((eax_19 & 0x400) != 0)
    char* edx_19 = *(arg1 + 0x124) + 1
    
    if (*(arg2 + 9) == 0x10)
        int32_t eax_14 = arg2[1]
        int32_t ebp_1 = 0
        void* ebx_1 = edx_19
        uint32_t eax_16 = (eax_14 + 1) u>> 1
        
        if (edx_19 u> &edx_19[eax_14])
            eax_16 = 0
        
        if (eax_16 != 0)
            ecx_8 = eax_16
            
            do
                eax_16.b = *edx_19
                ebx_1 += 1
                ebp_1 += 1
                *(ebx_1 - 1) = eax_16.b
                edx_19 = &edx_19[2]
            while (ebp_1 u< ecx_8)
        
        eax_16.b = *(arg2 + 0xa)
        eax_16.b <<= 3
        *(arg2 + 0xb) = eax_16.b
        int32_t eax_18 = zx.d(*(arg2 + 0xa)) * *arg2
        *(arg2 + 9) = 8
        arg2[1] = eax_18
        eax_19 = *(arg1 + 0x7c)

if ((eax_19.b & 0x40) != 0)
    eax_19, ecx_8 = sub_6aca50(eax_19, *(arg1 + 0x124) + 1, arg2, *(arg1 + 0x208), *(arg1 + 0x20c))
    
    if (arg2[1] == 0)
        sub_6a7500(arg1, "png_do_quantize returned rowbytes=0")
        noreturn

int32_t ebx_2 = *(arg1 + 0x7c)

if ((ebx_2 & 0x200) != 0 && *(arg2 + 9) == 8 && arg2[2].b != 3)
    int32_t ecx_13 = arg2[1]
    void* edx_24 = *(arg1 + 0x124) + 1 + ecx_13
    ecx_8 = ecx_13 + edx_24
    
    while (ecx_8 u> edx_24)
        eax_19.b = *(edx_24 - 1)
        edx_24 -= 1
        *(ecx_8 - 1) = eax_19.b
        ecx_8 -= 2
        *ecx_8 = eax_19.b
    
    int32_t eax_20 = arg2[1]
    *(arg2 + 9) = 0x10
    arg2[1] = eax_20 * 2
    eax_19.b = *(arg2 + 0xa)
    eax_19.b <<= 4
    *(arg2 + 0xb) = eax_19.b

if ((ebx_2 & 0x4000) != 0 && (*(arg1 + 0x74) & 0x800) != 0)
    eax_19, ecx_8 = sub_6aa800(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x20) != 0)
    eax_19, ecx_8 = sub_6b2880(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 8) != 0)
    eax_19, ecx_8 = sub_6aa110(arg1 + 0x1ad, *(arg1 + 0x124) + 1, arg2, arg1 + 0x1ad)

if ((*(arg1 + 0x7c) & 4) != 0)
    sub_6a9ff0(arg2, *(arg1 + 0x124) + 1)

if (arg2[2].b == 3 && *(arg1 + 0x14c) s>= 0)
    eax_19, ecx_8 = sub_6b2b80(arg1, arg2)

if ((*(arg1 + 0x7c) & 1) != 0)
    eax_19, ecx_8 = sub_6b2ac0(arg2, *(arg1 + 0x124) + 1)

int32_t edx_37 = *(arg1 + 0x7c)

if ((edx_37 & 0x10000) != 0)
    eax_19.b = *(arg2 + 9)
    ecx_8 = *(arg1 + 0x124) + 1
    
    if (eax_19.b u< 8)
        int32_t ebx_3 = arg2[1]
        int32_t ebp_2
        
        if (eax_19.b != 1)
            if (eax_19.b == 2)
                ebp_2 = 0x774510
                goto label_6a9ea6
            
            if (eax_19.b == 4)
                ebp_2 = 0x774710
                goto label_6a9ea6
        else
            ebp_2 = 0x774610
        label_6a9ea6:
            int32_t edx_36 = 0
            
            if (ecx_8 u> ebx_3 + ecx_8)
                ebx_3 = 0
            
            if (ebx_3 != 0)
                do
                    uint32_t eax_23 = zx.d(*ecx_8)
                    ecx_8 += 1
                    edx_36 += 1
                    eax_23.b = *(eax_23 + ebp_2)
                    *(ecx_8 - 1) = eax_23.b
                while (edx_36 u< ebx_3)
            
            edx_37 = *(arg1 + 0x7c)

if ((edx_37 & 0x8000) != 0)
    uint32_t eax_24 = zx.d(*(arg1 + 0x160))
    sub_6aa560(eax_24, *(arg1 + 0x124) + 1, arg2, eax_24, (*(arg1 + 0x78)).b)

if ((*(arg1 + 0x7c) & 0x80000) != 0)
    sub_6aa4c0(arg2, *(arg1 + 0x124) + 1)

if ((*(arg1 + 0x7c) & 0x20000) != 0)
    sub_6aa3a0(arg2, *(arg1 + 0x124) + 1)

uint32_t eax_25 = *(arg1 + 0x7c)

if ((eax_25.b & 0x10) != 0 && *(arg2 + 9) == 0x10)
    int32_t i_1 = zx.d(*(arg2 + 0xa)) * *arg2
    void* edx_45 = *(arg1 + 0x124) + 1
    
    if (i_1 != 0)
        int32_t i
        
        do
            ecx_8.b = *edx_45
            edx_45 += 2
            eax_25.b = *(edx_45 - 1)
            *(edx_45 - 2) = eax_25.b
            *(edx_45 - 1) = ecx_8.b
            i = i_1
            i_1 -= 1
        while (i != 1)
        eax_25 = *(arg1 + 0x7c)

if ((eax_25 & 0x100000) != 0)
    int32_t ecx_23 = *(arg1 + 0x64)
    
    if (ecx_23 != 0)
        ecx_23(arg1, arg2, *(arg1 + 0x124) + 1)
    
    eax_25.b = *(arg1 + 0x70)
    
    if (eax_25.b != 0)
        *(arg2 + 9) = eax_25.b
    
    eax_25.b = *(arg1 + 0x71)
    
    if (eax_25.b != 0)
        *(arg2 + 0xa) = eax_25.b
    
    char ecx_25 = *(arg2 + 0xa) * *(arg2 + 9)
    *(arg2 + 0xb) = ecx_25
    uint32_t eax_29 = zx.d(ecx_25)
    
    if (ecx_25 u>= 8)
        int32_t eax_31 = (eax_29 u>> 3) * *arg2
        arg2[1] = eax_31
        return eax_31
    
    eax_25 = (eax_29 * *arg2 + 7) u>> 3
    arg2[1] = eax_25

return eax_25
