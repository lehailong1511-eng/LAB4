# 2026-06-02T23:00:30.010826800
import vitis

client = vitis.create_client()
client.set_workspace(path="hls_nco")

comp = client.get_component(name="hls_nco")
comp.run(operation="C_SIMULATION")

