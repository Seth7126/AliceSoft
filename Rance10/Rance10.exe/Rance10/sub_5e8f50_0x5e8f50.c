// 函数: sub_5e8f50
// 地址: 0x5e8f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi_1

if (arg3 s>= 0)
    edi_1 = data_7fd4cc

void* edi_3

if (arg3 s< 0 || arg3 s>= (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
    edi_3 = nullptr
else
    int32_t edi_2 = *(edi_1 + 0x54)
    void* esi_2 = (arg3 << 3) + 4 + edi_2
    __Smtx_lock_shared(esi_2)
    edi_3 = *(edi_2 + (arg3 << 3))
    __Smtx_unlock_shared(esi_2)

int32_t* result = edi_3 + 0x10
int32_t edi_4 = neg.d(edi_3)
void* edi_6 = sbb.d(edi_4, edi_4, edi_3 != 0) & result

if (edi_6 != 0)
    *arg2 = *(edi_6 + 0x88)
    *arg4 = *(edi_6 + 0x8c)
    result = arg5
    *result = *(edi_6 + 0x90)

return result
