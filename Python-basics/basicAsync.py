import asyncio

async def main():
    print("Hello")
    await asyncio.sleep(1)
    print("... World welcome to!")
    await asyncio.sleep(2)
    print("Asyncio - Kurian")

if __name__ == "__main__":
    asyncio.run(main())
    
