// 函数: sub_10002197
// 地址: 0x10002197
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
void* eax = sub_10003063(data_10023648)
void* esi = sub_10003063(data_10023644)

if (esi u>= eax)
    void* ebx_2 = esi - eax
    
    if (ebx_2 + 4 u>= 4)
        uint32_t eax_3 = sub_10004204(eax)
        
        if (eax_3 u>= ebx_2 + 4)
            goto label_10002233
        
        uint32_t eax_5 = 0x800
        
        if (eax_3 u< 0x800)
            eax_5 = eax_3
        
        uint32_t eax_6 = eax_5 + eax_3
        void* eax_7
        
        if (eax_6 u>= eax_3)
            eax_7 = __realloc_crt(eax, eax_6)
        
        if (eax_6 u>= eax_3 && eax_7 != 0)
        label_1000221d:
            esi = eax_7 + (ebx_2 s>> 2 << 2)
            data_10023648 = sub_10002fe8(eax_7)
        label_10002233:
            *esi = sub_10002fe8(arg1)
            data_10023644 = sub_10002fe8(esi + 4)
            return arg1
        
        if (eax_3 + 0x10 u>= eax_3)
            eax_7 = __realloc_crt(eax, eax_3 + 0x10)
            
            if (eax_7 != 0)
                goto label_1000221d

return 0
