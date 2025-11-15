// 函数: sub_480820
// 地址: 0x480820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4 = ecx
char* eax
char* edi

if (arg1 != 0)
    if (arg1 u> 0x4ec4ec4)
        sub_6d08ed()
        noreturn
    
    int32_t eax_1 = arg1 * 0x34
    
    if (eax_1 u< 0x1000)
        eax, ecx = sub_6e810c(eax_1)
        edi = eax
    else
        if (eax_1 + 0x23 u<= eax_1)
            sub_6d08ed()
            noreturn
        
        eax, ecx = sub_6e810c(eax_1 + 0x23)
        edi = &eax[0x23] & 0xffffffe0
        *(edi - 4) = eax
else
    edi = nullptr

int32_t var_18_3 = ecx
int32_t var_1c = 0
int32_t var_20 = ecx
sub_480cc0(eax, data_7fcc9c, data_7fcc98, edi)
void* esi = data_7fcc98
void* ecx_4 = data_7fcc9c - esi

if (esi != 0)
    int32_t var_18_4 = 0
    void* var_1c_1 = ecx_4
    sub_4809e0(esi, data_7fcc9c)
    void* esi_1 = data_7fcc98
    int32_t eax_3
    int32_t edx_4
    edx_4:eax_3 = muls.dp.d(0x4ec4ec4f, data_7fcca0 - esi_1)
    int32_t edx_5 = edx_4 s>> 4
    sub_403160(esi_1, (edx_5 u>> 0x1f) + edx_5, 0x34)

data_7fcc98 = edi
data_7fcca0 = arg1 * 0x34 + edi
void* result = ecx_4 s/ 0x34 * 0x34 + edi
data_7fcc9c = result
return result
