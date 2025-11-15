// 函数: sub_497de0
// 地址: 0x497de0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x128)

if (ecx != 0)
    (*(*ecx + 0x20))()

if (*(arg1 + 0x128) != 0)
    char i
    
    do
        i = (*(**(arg1 + 0x128) + 0x34))()
    while (i != 0)

sub_4969c0(arg1 + 0x1a0)
int32_t* ecx_3 = *(arg1 + 0x1d0)

if (ecx_3 != 0)
    ecx_3 = (*(*ecx_3 + 4))()
    *(arg1 + 0x1d0) = 0

uint32_t result = sub_495c70(ecx_3)
int32_t* ecx_4 = *(arg1 + 0x128)

if (ecx_4 != 0)
    result = (*(*ecx_4 + 0x24))()

if (data_7fcb29 != 0)
    result = timeEndPeriod(data_7fcb2c)
    data_7fcb29 = 0

return result
