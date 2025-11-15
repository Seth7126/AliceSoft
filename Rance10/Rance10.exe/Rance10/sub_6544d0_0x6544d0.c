// 函数: sub_6544d0
// 地址: 0x6544d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi
int32_t var_4 = esi
int32_t* esp_1 = &var_4
int32_t eax = arg1[5]

if ((eax == 0xcd || eax == 0xce) && arg1[0x10].b == 0)
    if (arg1[0x1e] u< arg1[0x18])
        *(*arg1 + 0x14) = 0x45
        (**arg1)(arg1)
    
    (*(arg1[0x66] + 4))(arg1)
    arg1[5] = 0xd2
    esp_1 = &__return_addr
else if (eax == 0xcf)
    arg1[5] = 0xd2
else if (eax != 0xd2)
    *(*arg1 + 0x14) = 0x15
    *(*arg1 + 0x18) = arg1[5]
    (**arg1)(arg1)
    esp_1 = &__return_addr

while (*(arg1[0x6a] + 0x11) == 0)
    int32_t* eax_12 = arg1[0x6a]
    *(esp_1 - 4) = arg1
    
    if ((*eax_12)() == 0)
        int32_t eax_14
        eax_14.b = 0
        *esp_1
        return eax_14

void* eax_16 = arg1[6]
*(esp_1 - 4) = arg1
(*(eax_16 + 0x18))()
void* eax_18 = arg1[1]
void* esp_4 = esp_1

if (eax_18 != 0)
    int32_t eax_19 = *(eax_18 + 0x24)
    *(esp_4 - 4) = 1
    *(esp_4 - 8) = arg1
    eax_19()
    
    if (arg1[4].b != 0)
        arg1[5] = 0xc8
        eax_18.b = 1
        arg1[0x45] = 0
        *esp_4
        return eax_18
    
    arg1[5] = 0x64

eax_18.b = 1
*esp_4
return eax_18
