// 函数: sub_100086f0
// 地址: 0x100086f0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax_2 = data_10023508 * 0x14 + data_1002350c
void* ecx_2 = (arg1 + 0x17) & 0xfffffff0
int32_t edi
int32_t var_24 = edi
uint32_t var_c
uint32_t esi

if ((ecx_2 s>> 4) - 1 s>= 0x20)
    esi = 0
    var_c = 0xffffffff u>> (((ecx_2 s>> 4) - 1).b - 0x20)
else
    esi = 0xffffffff u>> ((ecx_2 s>> 4) - 1).b
    var_c = 0xffffffff

int32_t* ecx_6 = data_10023514
int32_t* ebx = ecx_6

while (true)
    arg1 = ebx
    
    if (ebx u>= eax_2)
        break
    
    if (((ebx[1] & var_c) | (*ebx & esi)) != 0)
        break
    
    ebx = &ebx[5]

if (ebx == eax_2)
    ebx = data_1002350c
    
    while (true)
        arg1 = ebx
        
        if (ebx u>= ecx_6)
            break
        
        if (((ebx[1] & var_c) | (*ebx & esi)) != 0)
            break
        
        ebx = &ebx[5]
    
    if (ebx == ecx_6)
        while (ebx u< eax_2)
            if (ebx[2] != 0)
                break
            
            ebx = &ebx[5]
            arg1 = ebx
        
        if (ebx == eax_2)
            ebx = data_1002350c
            
            while (true)
                arg1 = ebx
                
                if (ebx u>= ecx_6)
                    break
                
                if (ebx[2] != 0)
                    break
                
                ebx = &ebx[5]
            
            if (ebx == ecx_6)
                ebx = sub_10008257()
                arg1 = ebx
                
                if (ebx == 0)
                    return nullptr
        
        *ebx[4] = sub_10008307(ebx)
        
        if (*ebx[4] == 0xffffffff)
            return nullptr

data_10023514 = ebx
int32_t* eax_6 = ebx[4]
int32_t edx_8 = *eax_6
int32_t var_8_1 = edx_8

if (edx_8 == 0xffffffff || ((eax_6[edx_8 + 0x31] & var_c) | (eax_6[edx_8 + 0x11] & esi)) == 0)
    var_8_1 = 0
    int32_t edx_9 = eax_6[0x31]
    void* ecx_11 = &eax_6[0x11]
    
    while (((edx_9 & var_c) | (*ecx_11 & esi)) == 0)
        var_8_1 += 1
        edx_9 = *(ecx_11 + 0x84)
        ecx_11 += 4
    
    edx_8 = var_8_1

int32_t edi_9 = 0
int32_t i = eax_6[edx_8 + 0x11] & esi

if (i == 0)
    i = eax_6[edx_8 + 0x31] & var_c
    edi_9 = 0x20

while (i s>= 0)
    i *= 2
    edi_9 += 1

int32_t* edx_12 = eax_6[edx_8 * 0x81 + 0x51 + edi_9 * 2 + 1]
void* ecx_19 = *edx_12 - ecx_2
int32_t esi_3 = (ecx_19 s>> 4) - 1

if (esi_3 s> 0x3f)
    esi_3 = 0x3f

if (esi_3 == edi_9)
label_10008983:
    
    if (ecx_19 != 0)
        *edx_12 = ecx_19
        *(ecx_19 + edx_12 - 4) = ecx_19
else
    if (edx_12[1] == edx_12[2])
        if (edi_9 s>= 0x20)
            uint32_t ebx_5 = not.d(0x80000000 u>> (edi_9.b - 0x20))
            eax_6[var_8_1 + 0x31] &= ebx_5
            char temp0_1 = *(eax_6 + edi_9 + 4)
            *(eax_6 + edi_9 + 4) -= 1
            
            if (temp0_1 != 1)
                ebx = arg1
            else
                ebx = arg1
                ebx[1] &= ebx_5
        else
            uint32_t ebx_2 = not.d(0x80000000 u>> edi_9.b)
            eax_6[var_8_1 + 0x11] &= ebx_2
            char temp1_1 = *(eax_6 + edi_9 + 4)
            *(eax_6 + edi_9 + 4) -= 1
            
            if (temp1_1 != 1)
                ebx = arg1
            else
                ebx = arg1
                *ebx &= ebx_2
    
    *(edx_12[2] + 4) = edx_12[1]
    *(edx_12[1] + 8) = edx_12[2]
    
    if (ecx_19 != 0)
        void* ecx_31 = &eax_6[edx_8 * 0x81 + 0x51 + esi_3 * 2]
        int32_t edi_14 = *(ecx_31 + 4)
        edx_12[2] = ecx_31
        edx_12[1] = edi_14
        *(ecx_31 + 4) = edx_12
        *(edx_12[1] + 8) = edx_12
        
        if (edx_12[1] == edx_12[2])
            int32_t ecx_33
            ecx_33.b = *(esi_3 + eax_6 + 4)
            arg1:3.b = ecx_33.b
            ecx_33.b += 1
            *(esi_3 + eax_6 + 4) = ecx_33.b
            
            if (esi_3 s>= 0x20)
                if (arg1:3.b == 0)
                    ebx[1] |= 0x80000000 u>> (esi_3.b - 0x20)
                
                eax_6[var_8_1 + 0x31] |= 0x80000000 u>> (esi_3.b - 0x20)
            else
                if (arg1:3.b == 0)
                    *ebx |= 0x80000000 u>> esi_3.b
                
                eax_6[var_8_1 + 0x11] |= 0x80000000 u>> esi_3.b
        
        goto label_10008983

void** edx_13 = edx_12 + ecx_19
*edx_13 = ecx_2 + 1
*(edx_13 + ecx_2 - 4) = ecx_2 + 1
int32_t ecx_41 = eax_6[edx_8 * 0x81 + 0x51]
eax_6[edx_8 * 0x81 + 0x51] = ecx_41 + 1

if (ecx_41 == 0 && ebx == data_10022398 && var_8_1 == data_1002351c)
    data_10022398 = 0

*eax_6 = var_8_1
return &edx_13[1]
