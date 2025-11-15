// 函数: sub_492610
// 地址: 0x492610
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* esi = data_7fcb74

if (esi != 0)
    sub_417070(esi)
    int32_t var_10_1 = 0xc
    operator new(esi)

int32_t* esi_1 = data_7fcb80
data_7fcb74 = 0

if (esi_1 != 0)
    sub_417070(esi_1)
    int32_t var_10_2 = 0xc
    operator new(esi_1)

int32_t* esi_2 = data_7fcb7c
data_7fcb80 = 0

if (esi_2 != 0)
    int32_t** eax_1 = *esi_2
    sub_4941f0(esi_2, &var_4, *eax_1, eax_1)
    sub_403160(*esi_2, 1, 0x2c)
    int32_t var_1c_1 = 8
    operator new(esi_2)

int32_t* edi = data_7fcb84
data_7fcb7c = 0

if (edi != 0)
    int32_t* esi_3 = *edi
    void* eax = *esi_3
    var_4 = eax
    
    if (eax != esi_3)
        do
            int32_t* ecx_3 = *(eax + 0x14)
            
            if (ecx_3 != 0)
                (*(*ecx_3 + 4))()
            
            sub_429080(&var_4)
            eax = var_4
        while (eax != esi_3)
        
        edi = data_7fcb84
    
    if (edi != 0)
        int32_t* eax_3 = *edi
        int32_t* var_10_4 = eax_3
        sub_480920(edi, &var_4, *eax_3)
        sub_403160(*edi, 1, 0x18)
        int32_t var_1c_2 = 8
        operator new(edi)

int32_t* ecx_6 = data_7fcb78
data_7fcb84 = 0

if (ecx_6 != 0)
    (**ecx_6)(1)

int32_t* ecx_7 = data_7fcb70
data_7fcb78 = 0

if (ecx_7 != 0)
    (*(*ecx_7 + 4))()
    data_7fcb70 = 0
