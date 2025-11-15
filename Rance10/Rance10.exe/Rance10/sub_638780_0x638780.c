// 函数: sub_638780
// 地址: 0x638780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[0x13] == 0xffffffff)
    sub_6d0967(2)
    noreturn

char eax_2

if ((arg1[0x14] & 0x10000) != 0)
    eax_2 = sub_6390a0(arg1, arg1[0x12].w)

if ((arg1[0x14] & 0x10000) != 0 && eax_2 != 0)
    goto label_6387cd

int32_t eax_3 = arg1[0x14]

if ((eax_3 & 0x8000) == 0)
label_638807:
    uint32_t ecx_3 = zx.d(arg1[0x12].w)
    
    if (ecx_3 == 0x63 && (eax_3 & 0x40000) != 0)
        sub_636ac0(arg1)
        
        if ((*(**(arg1[0xf] + 4) + 0x10))(0x103, zx.d(arg1[0x12].w)) == 0)
            sub_6d0967(2)
            noreturn
        
        arg1[0x11] = sx.d(arg1[0x12].b) & 0x1f
        sub_636ac0(arg1)
    else if (ecx_3 == 0x78 && (eax_3 & 0x1000) != 0)
        sub_636ac0(arg1)
        
        if (sub_638e20(arg1, 0x10, 2) != 0)
            sub_6d0967(2)
            noreturn
    else if (ecx_3 != 0x75 || (eax_3 & 0x800) == 0)
        int32_t eax_13
        
        if ((eax_3 & 0x2000) != 0)
            eax_13 = sub_638e20(arg1, 8, 3)
        
        if ((eax_3 & 0x2000) == 0 || eax_13 == 3)
            return sub_639050(arg1) __tailcall
        
        if (arg1[0x11] == 0)
            sub_6d0967(2)
            noreturn
    else
        sub_636ac0(arg1)
        sub_638ee0(4)
else
    uint32_t ecx = zx.d(arg1[0x12].w)
    
    if (ecx != 0x61)
        if (ecx != 0x62)
            goto label_638807
        
        arg1[0x11] = 8
        goto label_6387cd
    
    arg1[0x11] = 7
label_6387cd:
    int16_t* edi_1 = *arg1
    
    if (edi_1 != arg1[2])
        if (*edi_1 == 0x5c && sub_636a80(arg1) != 0)
            *arg1 = &edi_1[1]
        
        *arg1 += 2
    
    sub_635790(arg1)

if (arg1[0x11] u> 0xffff)
    sub_6d0967(2)
    noreturn

arg1[0x11] = zx.d(arg1[0x11].w)
uint32_t result
result.b = 1
return result
