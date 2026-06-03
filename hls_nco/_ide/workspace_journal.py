# 2026-06-03T00:39:48.726327
import vitis

client = vitis.create_client()
client.set_workspace(path="hls_nco")

vitis.dispose()

