// 函数: sub_584a40
// 地址: 0x584a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi
int32_t var_10 = edi
int32_t* i = *(arg1 + 0x28)

while (i != *(arg1 + 0x2c))
    void* ecx = *i
    i = &i[1]
    *(ecx + 0x90) = *(arg1 + 0xa4)

int32_t* i_1 = *(arg1 + 0x28)

while (i_1 != *(arg1 + 0x2c))
    void* ecx_1 = *i_1
    i_1 = &i_1[1]
    *(ecx_1 + 0xa0) = *(arg1 + 0xb4)

int32_t* eax = *(arg1 + 0x28)
int32_t edi_2 = 0
int32_t xmm0_3 = *(arg1 + 0xc4)
uint32_t ebx_3 = (*(arg1 + 0x2c) - eax + 3) u>> 2

if (eax u> *(arg1 + 0x2c))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        void* ecx_2 = *eax
        eax = &eax[1]
        edi_2 += 1
        *(ecx_2 + 0xb0) = xmm0_3
    while (edi_2 != ebx_3)

int32_t* i_2 = *(arg1 + 0x28)

while (i_2 != *(arg1 + 0x2c))
    void* ecx_3 = *i_2
    i_2 = &i_2[1]
    *(ecx_3 + 0xb8) = 0

int32_t* result = sub_54a900(arg1 + 0x24, *(arg1 + 0x155), *(arg1 + 0x157), *(arg1 + 0x15a), 
    arg1 + 0xd4, arg1 + 0x114, 0, *(arg1 + 0xd0), *(arg1 + 0xcc), arg2)
return result
