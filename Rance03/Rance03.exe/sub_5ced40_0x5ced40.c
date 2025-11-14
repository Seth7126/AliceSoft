// 函数: sub_5ced40
// 地址: 0x5ced40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_40c
int32_t eax_1 = __security_cookie ^ &var_40c
void* esi = arg1
int32_t* eax_2 = *(esi + 0x208)
int32_t edi = *eax_2
void* eax_3 = &eax_2[1]
*(esi + 0x208) = eax_3
uint32_t result
int32_t edx

if (edi s< 0)
label_5cee58:
    int32_t var_420_7 = edi
    char const* const var_424_3 = "delegate"
    result = sub_5c2400(eax_3, edx, arg1, esi, "DG_CALLBEGIN")
else
    arg1 = *(esi + 0xb8) - *(esi + 0xb4)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = muls.dp.d(0x38e38e39, arg1)
    edx = edx_1 s>> 4
    eax_3 = arg1 s/ 0x48
    
    if (edi s>= eax_3)
        goto label_5cee58
    
    eax_3 = *(esi + 0xb4)
    arg1 = edi * 9
    void* ebx_1 = eax_3 + (arg1 << 3)
    
    if (ebx_1 == 0)
        goto label_5cee58
    
    arg1, edx = sub_5de000(esi + 0x220, &var_40c, *(ebx_1 + 0x28))
    *(esi + 0x234) -= 4
    int32_t edi_1 = **(esi + 0x234)
    eax_3 = (*(esi + 0x178) - *(esi + 0x174)) s>> 2
    
    if (edi_1 u>= eax_3)
    label_5cee4b:
        int32_t var_420_6 = edi_1
        int32_t var_424_2 = 0x6ea16c
        result = sub_5c2400(eax_3, edx, arg1, esi, "DG_CALLBEGIN")
    else
        eax_3 = *(esi + 0x174)
        arg1 = *(eax_3 + (edi_1 << 2))
        
        if (arg1 == 0)
            goto label_5cee4b
        
        struct _EXCEPTION_REGISTRATION_RECORD** eax_10
        int32_t ecx_2
        int32_t edx_2
        eax_10, ecx_2, edx_2 = sub_5d5230(arg1)
        
        if (eax_10.b != 0)
            sub_5ddfa0(esi + 0x220, &var_40c, *(ebx_1 + 0x28))
            sub_5ddf10(esi + 0x220, edi_1)
            sub_5ddf10(esi + 0x220, 0)
            int32_t ecx_7
            int32_t edx_3
            result, ecx_7, edx_3 = sub_5cfa50(esi, *(ebx_1 + 0x20))
            
            if (result.b == 0)
                int32_t var_420_5 = 0x6ea1c4
                result = sub_5c2400(result, edx_3, ecx_7, esi, "DG_CALLBEGIN")
        else
            char const* const var_420_1 = "gcDelegate"
            result = sub_5c2400(eax_10, edx_2, ecx_2, esi, "DG_CALLBEGIN")
sub_69a5bc(eax_1 ^ &var_40c)
return result
