// 函数: sub_4dbdf0
// 地址: 0x4dbdf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *(arg1 + 0x60)
void* edi = *(result + 0x68)

if (edi != 0)
    void* i = *(edi + 0x24)
    
    while (i != *(edi + 0x20))
        void* ecx = *(i - 4)
        i -= 4
        result = sub_4d6dd0(ecx)

return result
