// 函数: sub_6855e0
// 地址: 0x6855e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1

if (*(arg1 + 4) == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t* ecx_1 = *(arg1 + 0x10)
void* var_10

if (ecx_1 != 0)
    int32_t eax_1 = *ecx_1
    var_10 = ecx_1
    (*(eax_1 + 8))(var_10)
    *(arg1 + 0x10) = 0

int32_t* eax_2 = *(arg1 + 4)
var_10 = &var_4
var_4 = nullptr
void* __saved_edi
void** esp = &__saved_edi

if ((*(*eax_2 + 0x24))(eax_2, 0, 0x799804, var_10) s>= 0)
    int32_t* eax_4 = *(arg1 + 8)
    var_10 = arg1 + 0x10
    bool cond:0_1 = (*(*eax_4 + 0x24))(eax_4, var_4, 0, var_10) s>= 0
    void* eax_6 = var_4
    var_10 = eax_6
    esp = &var_10
    int32_t ecx_4 = *eax_6
    
    if (cond:0_1)
        (*(ecx_4 + 8))()
        int32_t eax_7
        eax_7.b = 1
        return eax_7
    
    (*(ecx_4 + 8))()

*esp
int32_t eax_3
eax_3.b = 0
esp[1]
esp[2]
return eax_3
