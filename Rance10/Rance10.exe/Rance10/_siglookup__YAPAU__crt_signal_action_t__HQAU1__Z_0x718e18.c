// 函数: ?siglookup@@YAPAU__crt_signal_action_t@@HQAU1@@Z
// 地址: 0x718e18
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* i = arg2

for (void* ecx = 0x90 + i; i != ecx; i += 0xc)
    if (*(i + 4) == arg1)
        return i

return nullptr
