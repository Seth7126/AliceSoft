// 函数: sub_44e6d0
// 地址: 0x44e6d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1

if (arg3 == 0 || arg2 == 0)
    return 0

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1

if (arg4 == 0)
    return 0

void* eax_2 = *arg3
int32_t ebx
int32_t var_18 = ebx
int32_t* esp_1 = &var_18
ebx.b = (*(eax_2 + 0x24))()
ebx:1.b = (*(*arg3 + 0x28))()
int32_t eax_6 = (*(*arg3 + 0x10))()
int32_t eax_7 = (*(*arg3 + 0x14))()
int32_t var_4 = eax_7
int32_t result
int32_t ebx_1

if (ebx.b != 0)
    int32_t var_1c_1 = 0x20
    int32_t var_20_1 = eax_7
    ebx_1 = eax_6
    int32_t var_24 = ebx_1
    esp_1 = &var_24
    
    if (ebx:1.b == 0)
        result = (*(*arg2 + 0xc))()
    else
        result = (*(*arg2 + 8))()
    
    goto label_44e75b

if (ebx:1.b != 0)
    ebx_1 = eax_6
    result = (*(*arg2 + 0x10))(ebx_1, eax_7)
    esp_1 = &var_18
label_44e75b:
    
    if (result != 0)
        *(esp_1 - 4) = esp_1[5]
        int32_t eax_10 = *arg4
        *(esp_1 - 8) = ebx_1
        *(esp_1 - 0xc) = 0
        *(esp_1 - 0x10) = 0
        *(esp_1 - 0x14) = arg3
        *(esp_1 - 0x18) = 0
        *(esp_1 - 0x1c) = 0
        *(esp_1 - 0x20) = result
        (*(eax_10 + 0x5c))()
        *(esp_1 - 0x20)
        *(esp_1 - 0x1c)
        *(esp_1 - 0x18)
        *(esp_1 - 0x14)
        return result

*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return 0
