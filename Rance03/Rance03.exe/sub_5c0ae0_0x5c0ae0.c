// 函数: sub_5c0ae0
// 地址: 0x5c0ae0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
int32_t ebx = esi[0x4f]
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x38e38e39, esi[0x28] - esi[0x27])
int32_t edx_3 = edx_2 s>> 4
int32_t eax_3 = (edx_3 u>> 0x1f) + edx_3
int32_t var_28_6

if (ebx u>= eax_3)
    var_28_6 = ebx
    sub_5c24e0(eax_3, edx_3, arg1, esi, 0x6e62ac)
else
    eax_3 = esi[0x27]
    arg1 = ebx * 9
    int32_t edi_1 = eax_3 + (arg1 << 3)
    
    if (edi_1 == 0)
        var_28_6 = ebx
        sub_5c24e0(eax_3, edx_3, arg1, esi, 0x6e62ac)
    else
        int32_t ebx_1 = *(edi_1 + 0x28)
        
        if (ebx_1 s> 0)
            void* var_c
            sub_42f420(&var_c, ebx_1)
            void* ebx_2 = var_c
            sub_5de000(&esi[0x88], ebx_2, ebx_1)
            
            if (ebx_2 != 0)
                j__free(ebx_2)
        
        struct sys43vm::CPage::VTable** eax_4
        int32_t* ecx_3
        int32_t edx_4
        eax_4, ecx_3, edx_4 = sub_5d57c0(&esi[0x62])
        
        if (eax_4 == 0)
        label_5c0beb:
            sub_5c24e0(eax_4, edx_4, ecx_3, esi, 0x6e632c)
            int32_t* eax_11
            eax_11.b = 0
            return eax_11
        
        int32_t eax_5 = sub_5d5dc0(&esi[0x5b])
        *(esi[0x5d] + (eax_5 << 2)) = eax_4
        eax_4, ecx_3, edx_4 = sub_5d3920(eax_4, *(edi_1 + 0x2c), edi_1 + 0x3c, *(edi_1 + 0x30))
        
        if (eax_4.b == 0)
            goto label_5c0beb
        
        if (sub_5c0400(esi, eax_5) != 0)
            int32_t ecx_9 = *(edi_1 + 4)
            *esi[0x393] = 0
            esi[0x393] += 4
            *esi[0x18f] = 0xffffffff
            esi[0x18f] += 4
            esi[0x82] = esi[0x83] + ecx_9
            int32_t eax_10
            eax_10.b = 1
            return eax_10
return false
